
#include "welcome.h"
#include "game/game_debug.h"

typedef  struct {
    game_node_t node;
}welcome_object_t;

static welcome_object_t *welcome_obj ;   //static welcome_object_t welcome_obj = {0};

int welcome_init();

int welcome_get_node(game_node_t **node)
{
    if(welcome_obj > 0) {
        *node = &(welcome_obj->node);
        return 0 ; // OK
    }
    welcome_init();
    *node = &welcome_obj->node;
    return 0; // OK
}
int welcome_init()
{
    welcome_obj = (welcome_object_t*) malloc(sizeof(welcome_object_t));
    welcome_obj->node.game_map_list[0] =  welcome_movie_map_get();
    welcome_obj->node.game_map_list[1] =  welcome_map_get();
    welcome_obj->node.game_current_map = welcome_obj->node.game_map_list[0];
    return 0;//OK
}
