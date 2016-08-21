#include "welcome_movie_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"

#include "window/basic/w_text.h"

#include "node/welcome/welcome_node.h"

struct{
    game_map_t *map;
    //window
    w_text_t*   top;
    w_text_t*   title;
    w_text_t*   text;
    w_text_t*   bottom;
}welcome_movie_map;

int welcome_movie_map_handle(void);
int welcome_movie_map_show(void);
int welcome_movie_map_select(char key);

game_map_t * welcome_movie_map_get()
{
    if(welcome_movie_map. map > 0)         return welcome_movie_map.map;
    welcome_movie_map_init(welcome_movie_map.map );
    return welcome_movie_map.map;
}

int welcome_movie_map_init()
{
    if(welcome_movie_map.map > 0) {
        return -1;
    }
    welcome_movie_map.map  = (game_map_t * )malloc(sizeof(game_map_t));
    welcome_movie_map.map->_init = welcome_movie_map_init;
    welcome_movie_map.map->_show = welcome_movie_map_show;
    welcome_movie_map.map->_select = welcome_movie_map_select;

    welcome_movie_map.title = window_create_text(NULL);
    welcome_movie_map.top = window_create_text(NULL);
    welcome_movie_map.text = window_create_text(NULL);
    welcome_movie_map.bottom = window_create_text(NULL);

    window_set_text(welcome_movie_map.top,"*************************************************");
    window_set_position(welcome_movie_map.top->window,0,0);
    window_set_text(welcome_movie_map.title," ��ӭ���롾������˵��\n");
    window_set_position(welcome_movie_map.title->window,10,3);
    window_set_text(welcome_movie_map.text,"���ߣ�seventeen 2016/8/22\n");
    window_set_position(welcome_movie_map.text->window,10,5);
    window_set_text(welcome_movie_map.bottom,"*************************************************");
    window_set_position(welcome_movie_map.bottom->window,0,10);
    return 0;   //INIT_OK
}
//int welcome_handle(void)
//{

//}

int welcome_movie_map_show(void)
{
    GAME_BASE_DEBUG("welcome_movie_show\r\n");
    system("cls");//����
    system("color 31");
    window_show_text(welcome_movie_map.top);
    window_show_text(welcome_movie_map.title);
    window_show_text(welcome_movie_map.text);
    window_show_text(welcome_movie_map.bottom);
}

int welcome_movie_map_select(char key)
{
    GAME_BASE_DEBUG("welcome_movie_select : %c\r\n",key);
    welcome_map_list_t * list = welcome_map_list_get();
    game_map_set(list->welcome_map);    //�����ﴦ��ͼƬ��̫��  ���Ҫ��������Ҫǣ���ܶණ��
    return GAME_MAP_FINISH;
}
