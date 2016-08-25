#include "city_window.h"

static int __w_init__(void **__this);

static int __w_msg ( void *_this,char arg);
static int __w_show( void *__this);
static int __w_hide ( void *__this);
static int __w_select ( void *__this,char arg);
static int __w_destory ( void *__this);
static int  __w_set_pos(void *__this, int x, int y);
static int __w_set_area(void *__this, int w, int h);


static int __w_init__(void **__this)
{
    w_city_t *city = (w_city_t *)__this;
    city->title->function.set_text(city->title,"【灭龙传说】\n");
    city->line->function.set_text(city->line,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\r\n");
    city->menu_item1->function.set_text(city->menu_item1,"[A]--人物信息");
    city->menu_item2->function.set_text(city->menu_item2,"[B]--包裹");
    city->menu_item3->function.set_text(city->menu_item3," [C]--商店");
    city->menu_item4->function.set_text(city->menu_item4,"[D]--【战场】");
    city->menu_item5->function.set_text(city->menu_item5,"[E]--档案");
    city->menu_item6->function.set_text(city->menu_item6,"[F]--返回");
    city->menu_item7->function.set_text(city->menu_item7,"[G]--小游戏");
    city->menu_item8->function.set_text(city->menu_item8,"[S]--休息");
    city->menu_item9->function.set_text(city->menu_item9,"[H]--帮助");


    city->menu_list->function.add_item(city->menu_list,city->menu_item1);
    city->menu_list->function.add_item(city->menu_list,city->menu_item2);
    city->menu_list->function.add_item(city->menu_list,city->menu_item3);
    city->menu_list->function.add_item(city->menu_list,city->menu_item4);
    city->menu_list->function.add_item(city->menu_list,city->menu_item5);
    city->menu_list->function.add_item(city->menu_list,city->menu_item6);
    city->menu_list->function.add_item(city->menu_list,city->menu_item7);
    city->menu_list->function.add_item(city->menu_list,city->menu_item8);
    city->menu_list->function.add_item(city->menu_list,city->menu_item9);


    char str[50];
    sprintf(str,"勇士：%s (%d级)","seventeen",100);   //test
    city->hero_text ->function.set_text(city->hero_text,str);
    city->bottom->function.set_text(city->bottom,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\r\n");

    city->show = __w_show;
    city->hide = __w_hide;

}
static int __w_hide ( void *__this)
{


}
static int __w_show( void *__this)
{
    system("cls");//清屏
    system("color 30");
    w_city_t *city =(w_city_t *) __this;
    city->title->function.show(city->title);
    city->line->function.show(city->line);
    city->hero_text->function.show(city->hero_text);
    city->menu_list->function.show(city->menu_list);
    city->bottom->function.show(city->bottom);
    return 0;
}


w_city_t *window_create_city(window_t *parent,int x,int y,int w,int h)
{
    w_city_t *city =(w_city_t *)malloc(sizeof(w_city_t)) ;
    window_t * window = _w_create_window(parent,x,y,w,h);
    city->window = window;
    city->title = window_create_text(city->window,20,0,40,1);
    city->line = window_create_text(city->window,0,1,60,1);
    city->hero_text = window_create_text(city->window,0,2,40,1);
    city->menu_list =  window_create_list(city->window,0,4,40,6);
    //item  先用着 有待优化
    city->menu_item1 = window_create_text(city->window,0,4,20,6);
    city->menu_item2 = window_create_text(city->window,0,6,20,6);
    city->menu_item3 = window_create_text(city->window,0,8,20,6);
    city->menu_item4 = window_create_text(city->window,20,4,20,6);
    city->menu_item5 = window_create_text(city->window,20,6,20,6);
    city->menu_item6 = window_create_text(city->window,20,8,20,6);
    city->menu_item7 = window_create_text(city->window,40,4,20,6);
    city->menu_item8 = window_create_text(city->window,40,6,20,6);
    city->menu_item9 = window_create_text(city->window,40,8,20,6);
    city->bottom  =  window_create_text(city->window,0,15,60,1);
    __w_init__(city);
    return (w_city_t *)city;
}
