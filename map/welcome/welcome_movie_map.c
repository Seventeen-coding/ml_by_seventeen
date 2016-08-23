#include "welcome_movie_map.h"

#include "window/welcome/welcome_movie_window.h"

#include "game/game_goble.h"
#include "game/game_debug.h"

#include "window/basic/w_text.h"

#include "node/welcome/welcome_node.h"

struct{
    game_map_t *map;
    //window
   w_welcome_movie_t *window;
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

    welcome_movie_map.window = window_create_welcome_movie(NULL,0,0,40,40);

    return 0;   //INIT_OK
}
//int welcome_handle(void)
//{

//}

int welcome_movie_map_show(void)
{
    GAME_BASE_DEBUG("welcome_movie_show\r\n");
    system("cls");//清屏
    system("color 31");
    window_show_welcome_movie(welcome_movie_map.window);
}

int welcome_movie_map_select(char key)
{
    GAME_BASE_DEBUG("welcome_movie_select : %c\r\n",key);
    welcome_map_list_t * list = welcome_map_list_get();
    game_map_set(list->welcome_map);    //在这里处理换图片不太好  如果要做好这里要牵连很多东西
    return GAME_MAP_FINISH;
}
