#include "game/game_test.h"


//除了用if和switch选择模块还有什么更好方法判断呢?
void game_test_run(int module)
{
    switch(module)
    {
    case GAME_TEST_BASE:
        game_test_base();
        break;
    }
}


void game_test_base()
{
     game_init();                    //----
     game_config();             //----
     game_run();                 //----

}
