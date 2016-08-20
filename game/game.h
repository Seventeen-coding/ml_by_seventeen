#ifndef GAME_H
#define GAME_H

#include "game/game_key.h"
#include "game/game_debug.h"
#include "game/game_test.h"
#include "game/game_goble.h"
#include "list/game_story_list_init.h"

int game_sotry_run(game_story_t  story);

/*由于做游戏 显示 选择 是必不可少的 概念*/
int game_map_show();
int game_map_select(int select);
int game_map_set(game_node_t node);

/*这两个接口其实不属于“游戏” 的概念  而是游戏的一个对象*/
/*明显以后优化部分可以对这部分划分出来*/


int game_main();



#endif // GAME_H

