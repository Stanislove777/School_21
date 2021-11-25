#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

typedef struct s_zone
{
    int wid;
    int hei;
    char c;
}   t_zone;

typedef struct s_shape
{
    char type;
    float x;
    float y;
    float radius;
    float wid;
    float hei;
    char color;
}   t_shape;

int clear(FILE *file, char *map)
{
    // Если файл был открыт то закрыть
    if (file)
        fclose(file);
    
    // Если карта была создана, то очистить
    if (map)
        free(map);
    
    return (0);
}

char *get_zone(FILE *file, t_zone *zone)
{
    int i;
    char *map;

    // первая строка в файле всегда - размер и символ заполнения
    if (fscanf(file, "%d %d %c\n", &zone->wid, &zone->hei, &zone->c) != 3)
        return (NULL);

    // если размер отрицательный или больше 300, то не валидно
    if (zone->wid <= 0 || zone->wid > 300 || zone->hei <= 0 || zone->hei > 300)
        return (NULL);

    // удалось ли занять память под зону
    if (!(map = (char *)malloc(sizeof(*map) * (zone->wid * zone->hei))))
        return (NULL);

    i = 0;
    while (i < (zone->wid * zone->hei))
    {
        map[i] = zone->c;
        i++;
    }

    // вернуть заполненую карту
    return (map);
}

int circle(float x, float y, t_shape *shape)
{
    float dist;

    dist = sqrtf(powf(x - shape->x, 2.) + powf(y - shape->y, 2.));
    if (dist <= shape->radius)
    {
        if ((shape->radius - dist) < 1.00000000)
            return (2);
        return (1);
    }
    return (0);
}

void draw_circ(t_zone *zone, char *map, t_shape *shape)
{
    int x;
    int y;
    int check;

    // printf("x = %d y = %d", zone->wid, zone->hei);
    y = 0;
    while (y < zone->hei)
    {
        x = 0;
        while (x < zone->wid)
        {
            check = circle((float) x, (float) y, shape);
            // printf("%d", check);
            if ((shape->type == 'c' && check == 2) || (shape->type == 'C' && check))
            {
                map[(y * zone->wid) + x] = shape->color;
                // printf("%c", map[(y * zone->wid) + x]);
            }
            x++;
        }
        y++;
    }
}

int draw_circs(FILE *file, t_zone *zone, char *map)
{
    t_shape shape;
    int byte;

    // считываем следующие строки файла и рисуем фигуру
    while ((byte = fscanf(file, "%c %f %f %f %c\n", &shape.type, &shape.x, &shape.y, &shape.radius, &shape.color)) == 5)
    {
        // printf("byte = %d radius = %f type = %c", byte, shape.radius, shape.type);
        if (shape.radius <= 0.00000000 || (shape.type != 'c' && shape.type != 'C'))
            return (0);
        draw_circ(zone, map, &shape);
    }

    if (byte != -1)
        return (0);

    return (1);
}

int rectangle(float x, float y, t_shape *shape)
{
    if (((x < shape->x || (shape->x + shape->wid < x)) || (y < shape->y)) || (shape->y + shape->hei < y))
        return 0;

    if (((x - shape->x < 1.00000000) || ((shape->x + shape->wid) - x < 1.00000000)) || ((y - shape->y < 1.00000000 || ((shape->y + shape->hei) - y < 1.00000000))))
        return 2;

    return 1;
}

void draw_rect(t_zone *zone, char *map, t_shape *shape)
{
    int x;
    int y;
    int check;

    // printf("x = %d y = %d", zone->wid, zone->hei);
    y = 0;
    while (y < zone->hei)
    {
        x = 0;
        while (x < zone->wid)
        {
            check = rectangle((float) x, (float) y, shape);
            // printf("%d", check);
            if ((shape->type == 'r' && check == 2) || (shape->type == 'R' && check))
            {
                map[(y * zone->wid) + x] = shape->color;
                // printf("%c", map[(y * zone->wid) + x]);
            }
            x++;
        }
        y++;
    }
}

int draw_rects(FILE *file, t_zone *zone, char *map)
{
    t_shape shape;
    int byte;

    // считываем следующие строки файла и рисуем фигуру
    while ((byte = fscanf(file, "%c %f %f %f %f %c\n", &shape.type, &shape.x, &shape.y, &shape.wid, &shape.hei, &shape.color)) == 6)
    {
        printf("byte = %d wid = %f type = %c", byte, shape.wid, shape.type);
        if (shape.wid < 0.00000000 || shape.hei < 0.00000000 || (shape.type != 'r' && shape.type != 'R'))
        {
            printf("FAIL");
            return (0);
        }
        draw_rect(zone, map, &shape);
    }

    if (byte != -1)
        return (0);

    return (1);
}

void draw(t_zone *zone, char *map)
{
    int i;

    i = 0;
    while (i < zone->hei)
    {
        write(1, map + (i * zone->wid), zone->wid);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char const *argv[])
{
    FILE *file;
    t_zone zone;
    char *map;

    zone.wid = 0;
    zone.hei = 0;
    zone.c = 0;
    map = NULL;
    // Если не два аргумента, то ошибка аргументов
    if (argc != 3)
        return(0);
    
    // Ошибка открытия файла
    if (!(file = fopen(argv[1], "r")))
        return (0);

    // printf("file = %d\n", file);

    // Получение ширины и высоты заполняемой зоны, и сохранение в map
    if (!(map = get_zone(file, &zone)))
        return (clear(file, NULL));

    // printf("map = %s", map);

    if (argv[2][0] == 'c')
    {
        // рисуем фигуру круг
        if (!(draw_circs(file, &zone, map)))
            return (clear(file, map));
    }
    else if (argv[2][0] == 'r')
    {
        // рисуем фигуру прямоугольник
        printf("rentangle");
        if (!(draw_rects(file, &zone, map)))
            return (clear(file, map));
    }
    // printf("2map = %s", map);

    draw(&zone, map);
    
    clear(file, map);

    return (0);
}
