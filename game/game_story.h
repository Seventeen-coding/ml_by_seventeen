#ifndef GAME_STORY_H
#define GAME_STORY_H

#include <stdlib.h>
#include "game/game_node.h"

/*这里安排好故事情节（node）*/

typedef struct{
    int index;
    int n_len;          /*node length*/
    game_node_t  *game_head_node;   //表　或者　数组　的 头
}game_story_t;

typedef struct game_story_list_type{
    game_story_t  *game_current_stoty;
    // game_stroy_t  *game_pre_stoty;
    struct game_story_list_type  *next;
}game_story_list_t;

int game_story_begin();
int game_story_end();
int game_story_run();
int game_story_init(game_story_list_t *list);
int game_story_has_next();

#endif // GAME_STORY_H

