/*
** AMSOFT PROJECT, 2022
** 3DCUBE
** File description:
** main.c
*/

#include "../includes/cube.h"

int init_window_props(core_t *core)
{
    return (0);
}

int loop(core_t *core, cube_t *cube)
{
    while (sfRenderWindow_isOpen(core->window)) {
        while (sfRenderWindow_pollEvent(core->window, core->event)) {
            puts("pop");
                if (core->event->type == sfEvtClosed)
                        sfRenderWindow_close(core->window);
        }
        puts("pop");
        sfRenderWindow_clear(core->window, sfBlack);
        //sfRenderWindow_drawRectangleShape(core->window, cube->side1, 1);
        sfRenderWindow_display(core->window);
    }
}

int main(int argc, char **argv)
{
    core_t core;
    cube_t cube;
    sfVideoMode video_mode = {800, 600, 32};

    core.window = sfRenderWindow_create(video_mode, "test", sfResize | sfClose, NULL);
    // cube.side1 = sfRectangleShape_create();
    // sfVector2f size = {50, 50};
    // sfRectangleShape_setSize(cube.side1, size);
    loop(&core, &cube);
    sfRenderWindow_destroy(core.window);
    return (0);
}