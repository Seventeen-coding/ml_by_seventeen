#include "game/game_story.h"

game_story_list_t *game_story_list = NULL;

game_story_list_t *game_setup_config_story()
{
    game_story_list_t    *list_node = game_story_list;
    game_story_list_t   *next  = list_node->next;
    /*reload story*/
    while(next != NULL)
    {
        game_remove_story(list_node->game_current_stoty);
        list_node = next;
        next  = list_node->next;
    }
    return game_story_list;
}

int game_story_init(game_story_list_t *list)
{
    if(list == NULL)    list = (game_story_list_t *)malloc(sizeof(game_story_list_t));

    /*最理想的做法就是用一个不需要语法的规则去设计每一个故事
            这样日后维护工作可以交给其他人了*/
    game_setup_config_story(list);
    return    0;
}

int game_story_has_next()
{
    if(game_story_list->next == NULL)    return -1;
    return 0;
}
int  game_remove_story( game_story_t  * stoty)
{


}
int game_story_begin()
{


}
int game_story_end()
{


}
int game_story_run()
{


}

