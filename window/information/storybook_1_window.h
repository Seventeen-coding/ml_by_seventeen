#ifndef STORYBOOK_1_WINDOW_H
#define STORYBOOK_1_WINDOW_H

#include "game/game_window.h"

#include "window/basic/w_text.h"

//typedef struct {

//}w_storybook_1_data_t;

typedef  struct{
    //window
    window_t *window;
    w_text_t *text;
    //data
    //w_storybook_1_data_t   data;
}w_storybook_1_t;

w_storybook_1_t *window_create_storybook_1(window_t *parent, int x, int y, int w, int h);
int     window_show_storybook_1(w_storybook_1_t*window);


#endif // STORYBOOK_1_WINDOW_H

