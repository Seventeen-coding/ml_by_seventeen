#include "game/game_story.h"
#include "game/game_goble.h"

game_story_list_node_t *game_story_list = NULL;

game_story_list_node_t *game_setup_config_story()
{
    game_story_list_node_t   *list_node = game_story_list;
    game_story_list_node_t  *next  = list_node->next;
    /*reload story*/
    while(next != NULL)
    {
        game_remove_story(list_node->data);
        list_node = next;
        next  = list_node->next;
    }
    return game_story_list;
}

int game_story_init(game_story_list_node_t *list)
{
    if(list == NULL)    list = (game_story_list_node_t *)malloc(sizeof(game_story_list_node_t));

    /*最理想的做法就是用一个不需要语法的规则去设计每一个故事
            这样日后维护工作可以交给其他人了*/
    game_setup_config_story(list);
    return    0;
}


int  game_remove_story( game_story_t  * stoty)
{


}
int game_story_begin()
{
}
int game_story_end(game_story_t * story)
{
    //完成了所有故事 游戏结束
    if(game_story_node_has_next(story) == GAME_STORY_FINISH)  return GAME_STORY_FINISH;


}

int game_story_node_has_next(game_story_t * story)
{
    if(game_node_map_has_next(story->game_current_node))    return -1;
    return 0;
}

int game_story_run(game_story_t *story)
{
    int status = game_status_get();
    while(status != GAME_OVER &&  status != GAME_STORY_FINISH)
    {
        game_node_begin(story->game_current_node);
        status = game_node_run(story->game_current_node);
        game_node_end(story->game_current_node);
    }
    return status;
}

