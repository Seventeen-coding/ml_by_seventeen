#ifndef WELCOME_MOVIE_WINDOW_H
#define WELCOME_MOVIE_WINDOW_H

#include "game/game_window.h"

#include "window/basic/w_text.h"

typedef struct {
    int __x;
    int __y;
}w_welcome_movie_data_t;

typedef struct{
    //window
   window_t *window;
    w_text_t *top;
    w_text_t *title;
    w_text_t *text;
    w_text_t *bottom;
    //data
    w_welcome_movie_data_t   data;
}w_welcome_movie_t;

w_welcome_movie_t *window_create_welcome_movie(window_t *parent, int x, int y, int w, int h);
int     window_show_welcome_movie(w_welcome_movie_t*window);




#endif // welcome_movie_H


