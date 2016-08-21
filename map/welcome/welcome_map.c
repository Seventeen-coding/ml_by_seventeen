
#include "welcome_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"
#include "window/basic/w_text.h"

struct{
    game_map_t *map;
    //window
    w_text_t*   top;
    w_text_t*   title;
    w_text_t*   menu1;
    w_text_t*   menu2;
    w_text_t*   menu3;
    w_text_t*   bottom;
}welcome_map;

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

    welcome_map.title = window_create_text(NULL);
    welcome_map.top = window_create_text(NULL);
    welcome_map.menu1 = window_create_text(NULL);
    welcome_map.menu2 = window_create_text(NULL);
    welcome_map.menu3 = window_create_text(NULL);

    window_set_text(welcome_map.top,"*************************************************");
    window_set_position(welcome_map.top->window,0,0);
    window_set_text(welcome_map.title,"    【灭龙传说】\n");
    window_set_position(welcome_map.title->window,7,3);
    window_set_text(welcome_map.menu1,"[A]--新的征程\n");
    window_set_position(welcome_map.menu1->window,7,5);
    window_set_text(welcome_map.menu2,"[B]--旧的回忆\n");
    window_set_position(welcome_map.menu2->window,7,6);
    window_set_text(welcome_map.menu3,"[C]--隐居山林\n");
    window_set_position(welcome_map.menu3->window,7,7);
    welcome_map.bottom = window_create_text(NULL);
    window_set_text(welcome_map.bottom,"*************************************************");
    window_set_position(welcome_map.bottom->window,0,10);
    return 0;   //INIT_OK
}
//int welcome_handle(void)
//{

//}
int welcome_map_show(void)
{
    GAME_BASE_DEBUG("welcome_show\r\n");
    system("cls");//清屏
    window_show_text(welcome_map.top);
    window_show_text(welcome_map.title);
    window_show_text(welcome_map.menu1);
    window_show_text(welcome_map.menu2);
    window_show_text(welcome_map.menu3);
    window_show_text(welcome_map.bottom);
}

int welcome_map_select(char key)
{
    GAME_BASE_DEBUG("welcome_select : %c\r\n",key);
    switch(key)
    {
    case 'a'|'A':
       // Set_current_map(New_game);
        return GAME_MAP_FINISH;
    case 'b'|'B':
        Save_Load_map();     //save load
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
