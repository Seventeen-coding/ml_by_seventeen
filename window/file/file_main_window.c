
#include "file_main_window.h"

static w_file_main_t * __init( window_t *);

static w_file_main_t *__init(window_t *window)
{

    w_text_t * title =window_create_text(window,0,0,strlen("------------------------����������--------------------------"),1);
    w_text_t * text = window_create_text(window,2,2,strlen("��ѡ��˵����е���������"),1);
    w_text_t * menu1 = window_create_text(window,4,4,strlen("S--�洢����"),1);
    w_text_t * menu2 = window_create_text(window,20,4,strlen("R--��ȡ����"),1);
    w_text_t * menu3 = window_create_text(window,8,6,strlen("Q--�������˵�"),1);
    w_text_t * bottom = window_create_text(window,0,10,strlen("--------------------------------------------------------------"),1);

    window_set_text(title,"------------------------����������--------------------------");
    window_set_text(text,"��ѡ��˵����е���������");
    window_set_text(menu1,"S--�洢����");
    window_set_text(menu2,"R--��ȡ����");
    window_set_text(menu3," Q--�������˵�");
    window_set_text(bottom,"--------------------------------------------------------------");


    w_file_main_t *file_main =(w_file_main_t *)malloc(sizeof(w_file_main_t)) ;
    file_main->window = window;
    file_main->window->this_window = &file_main;
    file_main->title = title;
    file_main->text = text;
    file_main->menu1 = menu1;
    file_main->menu2 = menu2;
    file_main->menu3 = menu3;
    file_main->bottom = bottom;

    return file_main;
}

w_file_main_t *window_create_file_main(window_t *parent,int x, int y,int w,int h)
{
    window_t *window;
    w_file_main_t *file_main;
    window = __create_window(parent,x,y,w,h);
    file_main  = __init(window);
    return (w_file_main_t *)file_main;
}

int    window_show_file_main(w_file_main_t*window)
{
    system("color 30");         //�Ժ�����ò�ͬ����ɫȥ��ʾ
    window_show_text(window->title);
    window_show_text(window->text);
    window_show_text(window->menu1);
    window_show_text(window->menu2);
    window_show_text(window->menu3);
    window_show_text(window->bottom);
    return 0;
}

int    window_hide_file_main(w_file_main_t*window)
{
    system("color 30");         //�Ժ�����ò�ͬ����ɫȥ��ʾ
    window_hide_text(window->title);
    window_hide_text(window->text);
    window_hide_text(window->menu1);
    window_hide_text(window->menu2);
    window_hide_text(window->menu3);
    window_hide_text(window->bottom);
    return 0;
}


