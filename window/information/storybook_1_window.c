

#include "storybook_1_window.h"

static w_storybook_1_t * __init( w_storybook_1_t *);

//�Ժ���һ��text������
static char main_t[700]="�Թž�����Ҫ��������ʿ������Ҳ���������������Ĵ�˵���������ʣ��ܹ���Ϊ����֮�ˣ��ض��ܹ��������£�����ǧ�š�����������˵���Ĺ��£��Ϳ�ʼ����������ʼ���㡣����";
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
    system("color 30");         //�Ժ�����ò�ͬ����ɫȥ��ʾ
    window->text->function.show(window->text);
    return 0;
}

int    window_hide_storybook_1(w_storybook_1_t*window)
{
    system("color 30");         //�Ժ�����ò�ͬ����ɫȥ��ʾ
    window->text->function.hide(window->text);
    return 0;
}


