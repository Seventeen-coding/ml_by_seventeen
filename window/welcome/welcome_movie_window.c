#include "welcome_movie_window.h"
static w_welcome_movie_t * __init( window_t *);

static w_welcome_movie_t *__init(window_t *window)
{
    w_welcome_movie_t *welcome_movie_window = (w_welcome_movie_t *)malloc(sizeof(w_welcome_movie_t));
    const char *top_text  = "*************************************************";
    const char *title_text  = " 欢迎进入【灭龙传说】\n";
    const char *text_text  = "作者：seventeen 2016/8/22\n";
    const char *bottom_text  = "*************************************************";

    welcome_movie_window->top = window_create_text(NULL,0,0,strlen(top_text),1);
    window_set_text(welcome_movie_window->top,top_text);
    welcome_movie_window->title = window_create_text(NULL,10,3,strlen(title_text),1);
    window_set_text(welcome_movie_window->title,title_text);
    welcome_movie_window->text = window_create_text(NULL,10,5,strlen(text_text),1);
    window_set_text(welcome_movie_window->text,text_text);
    welcome_movie_window->bottom = window_create_text(NULL,0,10,strlen(bottom_text),1);
    window_set_text(welcome_movie_window->bottom,bottom_text);
    return welcome_movie_window;
}

w_welcome_movie_t *window_create_welcome_movie(window_t *parent,int x,int y,int w,int h)
{
    window_t *window;
    w_welcome_movie_t *welcome_movie;
    window = __create_window(parent,x,y,w,h);
    welcome_movie  = __init(window);
    return (w_welcome_movie_t *)welcome_movie;
}

int    window_show_welcome_movie(w_welcome_movie_t*window)
{
    window_show_text(window->top);
    window_show_text(window->title);
    window_show_text(window->text);
    window_show_text(window->bottom);

    return 0;
}

int    window_hide_welcome_movie(w_welcome_movie_t*window)
{

    return 0;
}
