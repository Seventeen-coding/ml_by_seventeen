
#include "game_story_list_init.h"

int game_story_list_init(  game_story_list_node_t  * list)
{
    game_story_t *story;
    int ret = welcome_story_init(story);
    /*有故事就开始创建表*/
     gobel_game_config.game_story_list = list_create();
    //game_ =  list_create();
}
