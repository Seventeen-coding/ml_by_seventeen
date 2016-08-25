

#include "storybook_1_window.h"

static w_storybook_1_t * __init( w_storybook_1_t *);

//以后用一个text封起来
static char main_t[700]="自古就有想要屠龙的勇士，世间也流传着无数屠龙的传说！毫无疑问，能够成为屠龙之人，必定能够名动天下，流传千古。而《灭龙传说》的故事，就开始于屠龙，开始于你。。。";
//
static w_storybook_1_t *__init(w_storybook_1_t *storybook_1)
{
    window_t* window = storybook_1->window;
    w_text_t * text = window_create_text(window,2,20,20,8);
   text->function.set_text(text,main_t);
    storybook_1->window->data.__this = &storybook_1;
    storybook_1->text = text;
    return storybook_1;
}

w_storybook_1_t *window_create_storybook_1(window_t *parent,int x, int y,int w,int h)
{
    w_storybook_1_t *storybook_1 =(w_storybook_1_t *)malloc(sizeof(w_storybook_1_t)) ;
    window_t * window = _w_create_window(parent,x,y,w,h);
    storybook_1->window = window;
    __init(storybook_1);
    return (w_storybook_1_t *)storybook_1;
}

int    window_show_storybook_1(w_storybook_1_t*window)
{
    system("color 30");         //以后可以用不同的颜色去表示
    window->text->function.show(window->text);
    return 0;
}

int    window_hide_storybook_1(w_storybook_1_t*window)
{
    system("color 30");         //以后可以用不同的颜色去表示
    window->text->function.hide(window->text);
    return 0;
}


