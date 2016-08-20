
#include "game_node.h"
#include "game_goble.h"

int game_node_run(game_node_t *node)
{
    int status = game_status_get();
    while(status  != GAME_NODE_FINISH && status != GAME_OVER)
    {
        game_map_begin();
        status =  game_map_run(node->game_current_map);
        game_map_end();
    }
    return status;      //finish or game over
}

int game_node_begin(game_node_t *node)
{


}

int game_node_end(game_node_t *node)
{
    if( game_node_map_has_next(node))
    {

    }
    return GAME_RET_OK;
}

int game_node_map_has_next(game_node_t *node)
{


}
