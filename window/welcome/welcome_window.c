
#include "welcome_window.h"


static w_welcome_t * __init( window_t *);

static w_welcome_t *__init(window_t *window)
{
    w_welcome_t *welcome_window = (w_welcome_t *)malloc(sizeof(w_welcome_t));
    const char *top_text  = "*************************************************";
    const char *title_text = "    【灭龙传说】\n";
    const char *menu1_text =  "[A]--新的征程\n";
    const char *menu2_text ="[B]--旧的回忆\n";
    const char *menu3_text = "[C]--隐居山林\n";
    const char *bottom_text = "*************************************************";
    welcome_window->top = window_create_text(NULL,0,0,strlen(top_text),1);
    welcome_window->title = window_create_text(NULL,7,3,strlen(title_text),1);
    welcome_window->menu1 = window_create_text(NULL,7,5,strlen(menu1_text),1);
    welcome_window->menu2 = window_create_text(NULL,7,6,strlen(menu2_text),1);
    welcome_window->menu3 = window_create_text(NULL,7,7,strlen(menu3_text),1) ;
    welcome_window->bottom = window_create_text(NULL,0,10,strlen(bottom_text),1);

    window_set_text(welcome_window->top,top_text);
    window_set_text(welcome_window->title,title_text);
    window_set_text(welcome_window->menu1,menu1_text);
    window_set_text(welcome_window->menu2,menu2_text);
    window_set_text(welcome_window->menu3,menu3_text);
    window_set_text(welcome_window->bottom,bottom_text);

    return welcome_window;
}

w_welcome_t *window_create_welcome(window_t *parent,int x, int y , int w, int h)
{
    window_t *window;
    w_welcome_t *welcome;
    window = __create_window(parent,x,y,w,h);
    welcome  = __init(window);
    return (w_welcome_t *)welcome;
}

int    window_show_welcome(w_welcome_t*window)
{
    window_show_text(window->top);
    window_show_text(window->title);
    window_show_text(window->menu1);
    window_show_text(window->menu2);
    window_show_text(window->menu3);
    window_show_text(window->bottom);
    return 0;
}

int    window_hide_welcome(w_welcome_t*window)
{
    window_hide_text(window->top);
    window_hide_text(window->title);
    window_hide_text(window->menu1);
    window_hide_text(window->menu2);
    window_hide_text(window->menu3);
    window_hide_text(window->bottom);
    return 0;
}

