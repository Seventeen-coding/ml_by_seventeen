#ifndef NEW_GAME_NODE_H
#define NEW_GAME_NODE_H

#include "game/game_node.h"
//#include "map/new_game/new_game_map.h"
//#include "map/new_game/new_game_movie_map.h"
//#include "map/file/file_map.h"

typedef enum {
    RET_NEW_GAME_ERROR = -1,
    RET_NEW_GAME_OK
}new_game_ret_t;

typedef struct{
   // game_map_t *new_game_map;
//    game_map_t *new_game_movie_map;
    //game_map_t *storybook_1_map;

}new_game_map_list_t;


game_node_t *new_game_node_get();
int new_game_node_init();
new_game_map_list_t * new_game_map_list_get();

#endif // NEW_GAME_H

