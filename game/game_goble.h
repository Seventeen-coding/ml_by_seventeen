#ifndef GAME_GOBLE_H
#define GAME_GOBLE_H



#include "game/game_story.h"

typedef enum {
    GAME_EXIT = -1,
    GAME_OVER = 0,
    GAME_START,
    GAME_STOP,
    GAME_RUNNING,
    GAME_MAP_INIT_ERROR,
    GAME_MAP_INIT_OK,
    GAME_NODE_INIT_ERROR,
    GAME_NODE_INIT_OK,
    GAME_STORY_INIT_ERROR,
    GAME_STORY_INIT_OK,
    GAME_INIT_ERROR,
    GAME_INIT_FINISH,
    GAME_CONFIG_ERROR,
    GAME_CONFIG_FINISH,
    //由于在这里开始之前配置完毕 在这里以后都要确保是正确没有error
    GAME_MAP_FINISH,
    GAME_NODE_FINISH,
    GAME_STORY_FINISH,
    GMAE_STORY_LIST_FINISH,
    GAME_FINISH,

    GAME_TEST
}game_status_t;

/*动态最好用指针 */

struct {
    game_status_t game_current_status;
    game_map_t    *game_current_map;
    game_node_t  *game_current_node;
    game_story_t  *game_current_story;
    game_story_list_node_t  *game_story_list;
}gobel_game_config;


int game_init();

int game_config();

int game_run();

int game_start();

int game_stop();

int game_end();

int  game_goble_get();

int game_status_get();

int game_status_set();
#endif // GAME_GOBLE_H

