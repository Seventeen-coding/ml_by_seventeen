
#include "window/include/main_window.h"


void Show_main_dh()
{
    system("cls");//清屏
    int pn;
    system("color 31");
    for(pn=0;pn<60;pn++)
        printf("*");
    printf("\n\n\n");
    for(pn=0;pn<15;pn++)
        printf(" ");
    sttdy("欢迎进入【灭龙传说】",50,500);

    printf("\n\n\n");
    for(pn=0;pn<60;pn++)
        printf("*");
    //Sleep(1000);

}

void Show_main_menu_end()
{
    int sure;
    sure=MessageBoxA(NULL,"你确认要退出游戏？","退出确认",MB_YESNO);
    if(sure==IDYES)
        exit(1);
}

void Show_main_god_here()
{
    MessageBoxA(NULL,"恭喜你勇士！你成功过关，将得到神秘奖励！","神秘奖励",MB_OK);
    system("start www.nextgod.com");
}


