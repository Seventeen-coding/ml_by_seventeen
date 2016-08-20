
#include "game/game.h"


/*
 *  主要工作是配置游戏的数据
 *   仅仅只是初始化 生成某些数据
 *  不作其他赋值操作
 */
int game_init()
{

    GAME_BASE_DEBUG("game_init\n\r");
    int status;
    do{
        /*
         * 注意：如果是大型的游戏 可以在启动前初始化 这样的话故事跳转无需初始化 游戏流畅度自然高
         * 这样也会是内存消耗增大，启动游戏时间长
         * 如果是小型游戏 可以在每次跳转时先销毁前一个 再重新创建 由于这个过程处理比较快 用户不会感觉
         *  卡顿 而且节省内存空间
         */
        //do something init
        /*现在的游戏不需要游戏前进行 map init*/
        //game_map_init();            //这些配置不应该在game_map.h上  应写map文件夹上
        game_node_init();           //因为这些是对象生成 如果放在game需要用一个配置链接需要
        // game_story_init();           //初始化的对象
        // game_story_list_init();
        //  game_set_map( game_welcome);
        //gobel_game_config.game_map_p = &gobel_game_config.game_current_node.game_current_map;
        status = GAME_INIT_FINISH;
    }while(0);
    GAME_BASE_DEBUG("game_init : %d \n\r",status);
    return status;
}
/*
 *  主要工作是配置环境
 *   用一个全局参数保存一些设置
 *   所以主要都要是赋值为主
 */
int game_config()
{
    GAME_BASE_DEBUG("game_config\n\r");
    int status;
    do{
        //do something config
        // gobel_game_config.game_story_list = game_story_list_t;
        //
        status = GAME_CONFIG_FINISH;
    }while(0);
    GAME_BASE_DEBUG("game_config : %d \n\r",status);
    return status;
}

int game_run()
{
    if(game_status_get() == GAME_OVER)  return GAME_OVER;     //可以用switch多种选择
    int status;
    //start game_story_list
    do
    {
        game_story_begin();
        //游戏程序越来越复杂时以后优化把这部分替换 game_node_run
        //由于框架不针对实例化对象
        game_story_run(gobel_game_config.game_current_story);
        game_story_end();
    } while(status != GAME_OVER &&  status != GMAE_STORY_LIST_FINISH);
    //end game_story_list
}
/*
 *  game_start 主要是初始化一些数据 以及读取数据
 * 用一个欢迎界面让用户选择执行哪个记录 从而在不同的游戏
 * 记录开始游戏 当中还包括了测试模式
 */
int game_start()
{
    GAME_BASE_DEBUG("game_start\n\r");      //这里优化可以用注册形式 形成一个外围独立模块 在不打断程序正常模式下 要不然log越来越多 而且没用
    int status  = GAME_START;
    int ret;
    game_node_t  *node ;
    do{
        game_status_set(status);
        status = game_init();
        //welcome界面 好比load 存档 设置模式 音效 文字 图形等等
        status = game_config();          //  在这里定义测试模式 或者用一个 welcome界面
    }while(0);
    return ret;
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


