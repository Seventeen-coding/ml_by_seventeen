
#include "game_node.h"
#include "game_goble.h"

int game_node_run(game_node_t *node)
{
    int status;
    game_status_set(GAME_RUNNING);
    do
    {
        game_map_run(node->game_current_map);
        status = game_status_get();
    } while(status  != GAME_NODE_FINISH);
    game_status_set(GAME_STORY_FINISH);
}

