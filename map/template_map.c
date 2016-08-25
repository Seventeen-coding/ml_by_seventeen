

#include "template_map.h"
#include "game/game_goble.h"
#include "game/game_debug.h"
#include "window/basic/w_text.h"

struct{
    //map
    game_map_t *map;
    //window
}template_map;

int template_map_handle(void);
int template_map_show(void);
int template_map_select(char key);
int template_map_init();

game_map_t * template_map_get()
{

}

int template_map_init()
{
    if(template_map.map > 0) {
        return -1;
    }
    template_map.map  = (game_map_t * )malloc(sizeof(game_map_t));
    template_map.map->_init = template_map_init;
    template_map.map->_select = template_map_select;
    template_map.map->_show = template_map_show;
}

//int template_handle(void)
//{

//}

int template_map_show(void)
{
}

int template_map_select(char key)
{
}
