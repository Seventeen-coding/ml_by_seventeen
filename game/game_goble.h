#ifndef GAME_GOBLE_H
#define GAME_GOBLE_H



#include "game/game_story.h"

typedef enum {
    GAME_OVER = 0,
    GAME_STOP,
    GAME_RUNNING,
    GAME_MAP_FINISH,
    GAME_NODE_FINISH,
    GAME_STORY_FINISH
}game_status_t;

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

