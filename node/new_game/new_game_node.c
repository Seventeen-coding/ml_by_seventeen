
#include "new_game_node.h"
#include <stdlib.h>
struct{
    //�о��������ֿ��Էֿ�
    game_node_t * node;
    //list
    new_game_map_list_t list;
}new_game_node;

game_node_t * new_game_node_get()
{
    int ret;
    if(new_game_node.node == NULL)
    {
        ret = new_game_node_init();
        if(ret != RET_NEW_GAME_OK)   return NULL;
    }
    return new_game_node.node;
}

new_game_map_list_t * new_game_map_list_get()
{
    int ret;
    if(new_game_node.node != NULL)   &new_game_node.list;

    ret = new_game_node_init();
    if(ret != RET_NEW_GAME_OK)   return NULL;

    return &new_game_node.list;
}

int new_game_node_init()
{
    int ret;
    new_game_node.node = (game_node_t *)malloc(sizeof(game_node_t));
    if(new_game_node.node == NULL)    return RET_NEW_GAME_ERROR;

    /* map�������*/
    /*get map*/
    //    new_game_node.list.welcome_map  = welcome_map_get();
    //    new_game_node.list.welcome_movie_map  = welcome_movie_map_get();
    //    new_game_node.list.file_map = file_map_get();

    /*add list  �о����п��� ��Ҫ�Ż�*/
    /*
    new_game_node.node->map_head = (game_map_list_node_t*) list_create(new_game_node.list.welcome_map);
    list_insert_after(new_game_node.node->map_head , new_game_node.list.welcome_movie_map);
    list_insert_after(new_game_node.node->map_head , new_game_node.list.file_map);
    */
    return RET_NEW_GAME_OK;
}
