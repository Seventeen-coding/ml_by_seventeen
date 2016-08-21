
#include "welcome_node.h"
#include <stdlib.h>


struct{
    //感觉这两部分可以分开
    game_node_t * node;
    //list
    welcome_map_list_t list;
}welcome_node;

game_node_t * welcome_node_get()
{
    int ret;
    if(welcome_node.node == NULL)
    {
        ret = welcome_node_init();
        if(ret != RET_WELCOME_OK)   return NULL;
    }
    return welcome_node.node;
}

welcome_map_list_t * welcome_map_list_get()
{
    int ret;
    if(welcome_node.node == NULL)
    {
        ret = welcome_node_init();
        if(ret != RET_WELCOME_OK)   return NULL;
    }
    return &welcome_node.list;
}

int welcome_node_init()
{
    int ret;
    welcome_node.node = (game_node_t *)malloc(sizeof(game_node_t));
    if(welcome_node.node == NULL)    return RET_WELCOME_ERROR;

    /* map是随机的*/
    /*get map*/
    welcome_node.list.welcome_map  = welcome_map_get();
    welcome_node.list.welcome_movie_map  = welcome_movie_map_get();

    /*add list  感觉可有可无 需要优化*/
    welcome_node.node->map_head = (game_map_list_node_t*) list_create(welcome_node.list.welcome_map);
    list_insert_after(welcome_node.node->map_head , welcome_node.list.welcome_movie_map);

    return RET_WELCOME_OK;
}
