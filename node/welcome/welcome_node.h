#ifndef WELCOME_NODE_H
#define WELCOME_NODE_H

#include "game/game_node.h"
#include "map/welcome_map.h"
#include "map/welcome_movie_map.h"

typedef enum {
    RET_WELCOME_ERROR = -1,
    RET_WELCOME_OK
}welcome_ret_t;

int welcome_get_node(game_node_t **node);

#endif // WELCOME_NODE_H

