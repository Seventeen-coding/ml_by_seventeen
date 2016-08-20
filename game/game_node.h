#ifndef GAME_NODE_H
#define GAME_NODE_H

#include "game_map.h"


typedef struct{
       game_map_t* game_map_list[10] ;      //先用数组代替list
       game_map_t* game_current_map;
}game_node_t;

int game_node_run(game_node_t *node);

#endif // GAME_NODE_H

