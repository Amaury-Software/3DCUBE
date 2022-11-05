/*
** AMSOFT PROJECT, 2022
** 3DCUBE
** File description:
** cube.h
*/

#ifndef CUBE_H_
#define CUBE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

struct cube_data_f {
    sfColor cube_color;
    sfRectangleShape *side1;
    sfRectangleShape *side2;
    sfRectangleShape *side3;
    sfRectangleShape *side4;
    int cube_size;
    int speed;
};

struct core_f {
    sfRenderWindow *window;
    sfEvent *event;
};

typedef struct cube_data_f cube_t;
typedef struct core_f core_t;

#endif /*CUBE_H_*/