#ifndef WELCOME_WINDOW_H
#define WELCOME_WINDOW_H

#include "game/game_window.h"
#include "window/basic/w_text.h"

typedef struct {

}w_welcome_data_t;

//C 语言实验结构体触发函数不好用
#if 0
typedef struct {

}w_welcome_function_t;
#endif

typedef struct{
    //window
    window_t *window;
    w_text_t*   top;
    w_text_t*   title;
    w_text_t*   menu1;
    w_text_t*   menu2;
    w_text_t*   menu3;
    w_text_t*   bottom;
    //data
    w_welcome_data_t   data;
    //function
}w_welcome_t;

w_welcome_t *window_create_welcome(window_t *parent, int x, int y, int w, int h);
int     window_show_welcome(w_welcome_t * window);
//other function



#endif // WELCOME_WINDOW_H

