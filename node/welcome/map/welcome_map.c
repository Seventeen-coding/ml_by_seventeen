
#include "welcome_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"

game_map_t *welcome_map ;

int welcome_map_handle(void);
int welcome_map_show(void);
int welcome_map_select(char key);
int welcome_map_init();

game_map_t * welcome_map_get()
{
    if(welcome_map > 0)         return welcome_map;
    welcome_map_init(welcome_map);
    return welcome_map;
}

int welcome_map_init()
{
    if(welcome_map > 0) {
        return &welcome_map;
    }
    welcome_map  = (game_map_t * )malloc(sizeof(game_map_t));
    welcome_map->_init = welcome_map_init;
    welcome_map->_show = welcome_map_show;
    welcome_map->_select = welcome_map_select;
    return 0;   //INIT_OK
}
//int welcome_handle(void)
//{

//}

int welcome_map_show(void)
{
    GAME_BASE_DEBUG("welcome_show\r\n");

}

int welcome_map_select(char key)
{
    GAME_BASE_DEBUG("welcome_select : %c\r\n",key);
    return GAME_RUNNING;
}
