#ifndef FILE_MAIN_WINDOW_H
#define FILE_MAIN_WINDOW_H

#include "game/game_window.h"

#include "window/basic/w_text.h"

typedef struct {
    int __x;
    int __y;
}w_file_main_data_t;

typedef struct{
    //window
   window_t *window;
    w_text_t *title;
    w_text_t *text;
    w_text_t *menu1;
    w_text_t *menu2;
    w_text_t *menu3;
    w_text_t *bottom;
    //data
    w_file_main_data_t   data;
}w_file_main_t;

w_file_main_t *window_create_file_main(window_t *parent, int x, int y, int w, int h);
int     window_show_file_main(w_file_main_t*window);


#endif // FILE_MAIN_WINDOW_H

