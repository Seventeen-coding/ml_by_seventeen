
#include "welcome_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"
#include "window/welcome/welcome_window.h"


#include "node/welcome/welcome_node.h"

struct{
    game_map_t *map;
    //window
    w_welcome_t *window;
}welcome_map;

static game_map_t *this_map = NULL;

int welcome_map_handle(void);
int welcome_map_show(void);
int welcome_map_select(char key);
int welcome_map_init();

game_map_t * welcome_map_get()
{
    if(welcome_map.map > 0)         return welcome_map.map;
    welcome_map_init();
    return welcome_map.map;
}

int welcome_map_init()
{
    if(welcome_map.map > 0) {
        return -1;
    }
    welcome_map.map  = (game_map_t * )malloc(sizeof(game_map_t));
    welcome_map.map->_init = welcome_map_init;
    welcome_map.map->_show = welcome_map_show;
    welcome_map.map->_select = welcome_map_select;

    welcome_map.window = window_create_welcome(NULL,0,0,40,40);

    this_map = welcome_map.map;
    return 0;   //INIT_OK
}
//int welcome_handle(void)
//{

//}
int welcome_map_show(void)
{
    GAME_BASE_DEBUG("welcome_show\r\n");
    system("cls");//清屏
    window_show_welcome(welcome_map.window);
    return 0;
}

int welcome_map_select(char key)
{
    GAME_BASE_DEBUG("welcome_select : %c\r\n",key);
    welcome_map_list_t * list = welcome_map_list_get();
    switch(key)
    {
    case 'a'|'A':
        //Set_current_node(New_game);
        return GAME_NODE_FINISH;
    case 'b'|'B':
        game_next_map_set(this_map,list->file_map);   //关闭窗口后需要返回 game_callback_map_set
        return GAME_MAP_FINISH;
    case 'c'|'C':
        Show_main_menu_end();
        return GAME_MAP_FINISH;
    case 'w'|'W':
        Show_main_god_here();
        return GAME_MAP_FINISH;
    default:
        return GAME_RUNNING;
    }

}
