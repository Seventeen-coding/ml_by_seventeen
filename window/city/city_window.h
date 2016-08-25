#ifndef CITY_WINDOW_H
#define CITY_WINDOW_H

#include "data/include/hero_data.h"
#include "game/game_window.h"
#include "window/basic/w_text.h"
#include "window/basic/w_list.h"

typedef struct {

}w_city_data_t;

typedef struct{
    //window
    window_t *window;
    w_text_t *title;
    w_text_t *line;
    w_text_t *hero_text;
    w_list_t *menu_list;
    w_text_t * menu_item1;
    w_text_t * menu_item2;
    w_text_t*  menu_item3;
    w_text_t*  menu_item4;
    w_text_t * menu_item5;
    w_text_t * menu_item6;
    w_text_t*  menu_item7;
    w_text_t*  menu_item8;
    w_text_t*  menu_item9;
    //menu_map
    w_text_t *bottom;
    //data
    w_city_data_t   data;

    //function
    w_show_handle show;
    w_hide_handle hide;
    // w_msg_handle msg;
    w_select_handle select;

}w_city_t;

w_city_t *window_create_city(window_t *parent,int x,int y,int w,int h);


void Show_city_menu();

#endif // CITY_WINDOW_H

