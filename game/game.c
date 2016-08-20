
#include "game/game.h"
/*动态最好用指针 */

//放在这里避免其他文件可以访问这个参数 需要的话可以通过接口访问
struct {
    game_status_t game_current_status;
    game_map_t    *game_current_map;
    game_node_t  *game_current_node;
    game_story_t  *game_current_story;
}gobel_game_config;

int game_init()
{
    GAME_BASE_DEBUG("game_init\n\r");

}


int game_config()
{
    GAME_BASE_DEBUG("game_config\n\r");
    game_status_set(GAME_RUNNING);
    return 0;

    // game_story_init();
    //  game_set_map( game_welcome);
    //gobel_game_config.game_map_p = &gobel_game_config.game_current_node.game_current_map;
    /*
     * 注意：如果是大型的游戏 可以在启动前初始化 这样的话故事跳转无需初始化 游戏流畅度自然高
     * 这样也会是内存消耗增大，启动游戏时间长
     * 如果是小型游戏 可以在每次跳转时先销毁前一个 再重新创建 由于这个过程处理比较快 用户不会感觉
     *  卡顿 而且节省内存空间
     */
    //game_init_story()
}
int game_run()
{
    if(game_status_get() == GAME_OVER)  return GAME_OVER;     //可以用switch多种选择

    game_story_begin();
    while(game_status_get() != GAME_OVER)
    {
        //游戏程序越来越复杂时以后优化把这部分替换 game_node_run
        //由于框架不针对实例化对象 所以用test_map就好
        game_story_run();
        //game_map_set();      //改为 gobel_game更好
        //game_map_run(*(gobel_game_config.game_map_p));  //game_node_run game_story_run  到最后是以 map为单位 一帧一帧这样运行
        //
    }
    game_story_end();
}
int game_start()
{
    GAME_BASE_DEBUG("game_start\n\r");      //这里优化可以用注册形式 形成一个外围独立模块 在不打断程序正常模式下 要不然log越来越多 而且没用
    //game_init();
    //welcome界面 好比load 存档 设置模式 音效 文字 图形等等
    game_config();          //  在这里定义测试模式 或者用一个 welcome界面

    game_node_t  *node;
    int ret = 0;
    ret = welcome_get_node(&node);
    if(ret != 0 ) return ret;

    game_node_run(node);    //可以考虑在欢迎界面选择是否进入测试模式
   /*
    switch(mode){
    case 1: game_test_run(mode);           //每开发一个模块在test模块独立运行 大大提高开发效率
        break;
    case 2: game_run();
        break;
    }
    */
}

int game_stop()
{

}

int game_end()
{

    game_stop();
}

int game_status_set(int status)
{
    //   if(check_up_arg(status))
    gobel_game_config.game_current_status = status;
    return 0;            //设置参数一般来说是返回成功与否   C语言 一般用0 当作ture
}

int game_status_get()
{
    return gobel_game_config.game_current_status;
}

int game_sotry_run(game_story_t story)
{
    //   if(check_up_arg(map))
    //map.map_handle();
}



///////////////////////////////////////////////////////


