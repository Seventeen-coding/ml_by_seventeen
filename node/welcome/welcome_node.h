#ifndef WELCOME_NODE_H
#define WELCOME_NODE_H

#include "game/game_node.h"
#include "map/welcome/welcome_map.h"
#include "map/welcome/welcome_movie_map.h"
#include "map/file/file_map.h"

typedef enum {
    RET_WELCOME_ERROR = -1,
    RET_WELCOME_OK
}welcome_ret_t;

typedef struct{
    game_map_t *welcome_map;
    game_map_t *welcome_movie_map;
   game_map_t *file_map;
}welcome_map_list_t;


game_node_t *welcome_node_get();
int welcome_node_init();
welcome_map_list_t * welcome_map_list_get();
#endif // WELCOME_NODE_H

