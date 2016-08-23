#include "w_text.h"

static w_text_t * __init(window_t *window,int x,int y,int w,int h);
static int __show();
static int __destory();
static int __select(char key);
static int __hide();
static int __msg(char msg);

//static int __set_text();


w_text_t * window_create_text(window_t *parent,int x,int y,int w,int h)
{
    window_t *window;
    w_text_t *text;
    window = __create_window(parent);
    text = __init(window,x,y,w,h);

    return (w_text_t *)text;
}

static w_text_t * __init(window_t *window,int x,int y,int w,int h)
{
    w_text_t * text = (w_text_t *)malloc(sizeof(w_text_t));
    text->window = window;
    text->window->this_window = &text;
    window_set_position(window , x,  y);
    window_set_area(window, w, h);

    /*
    text->window->_destory = __destory;
    text->window->_show = __show;
    text->window->_hide = __hide;
    text->window->_select = __select;
    text->window->_msg = __msg;
    */
    return text;
}


static int __select(char key)
{
    return TEXT_NEXT;
}

static int __hide()
{


}

int     window_show_text(w_text_t*text)
{
    system("color 30");         //以后可以用不同的颜色去表示
    int x = text->window->__x;
    int y = text->window->__y;
    //printline
    text->data.index = 0;
    while(text->data.index != text->data.len)
    {
         if( (text->data.index % text->window->__w)  == 0)  gotoXY(x,y++);
        if(text->data.text[text->data.index]  != ' ')  printf("%c",text->data.text[text->data.index]);
        text->data.index++;
    }
    return 0;
}

int     window_hide_text(w_text_t*text)
{
    system("color 30");
    gotoXY(text->window->__x,text->window->__y);
    //需要优化
    int i ;
    for(i = 0 ;i< text->data.len;i++)   printf(" ");
    return 0;
}

static int __msg(char msg)
{

    return 0;
}
static int __destory()
{

    return 0;
}

int    window_set_text(w_text_t*text, const char *src_text)
{
    text->data.len = strlen(src_text);
    if(text->data.text != NULL) free(text->data.text);
    text->data.text = (char *)malloc(text->data.len + 1);
    strcpy(text->data.text,src_text);
    return 0;
}

