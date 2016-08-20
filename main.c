/*灭龙传说文字版  V2016/6/27  By Seventeen  */
/*重构版 2016/8/17    By Seventeen                       */

#include "main.h"

int main (int argc, char *argv[])
{
    //init_game_env();/*这里运行的是游戏外部无关的设置 如窗口大小 光标 字体颜色等 思维: 以“游戏” 为思想去设计这个接口 */
    game_start();
    /*不能走到这里*/
    game_end();
    return 0;
}


