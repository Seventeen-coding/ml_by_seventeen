
#include "game_node.h"
#include "game_goble.h"

int game_node_run(game_node_t *node)
{
    int status = game_status_get();
    while(status  != GAME_NODE_FINISH && status != GAME_OVER)
    {
        status =  game_map_run(node->game_current_map);
    }
    return status;      //finish or game over
}

