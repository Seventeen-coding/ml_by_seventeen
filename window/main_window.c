
#include "window/include/main_window.h"

void Show_main_window()
{
    system("cls");//����
    char ch;
    int pn;
    system("color 30");
    for(pn=0;pn<60;pn++)
        printf("*");
    printf("\n\n\n");
    for(pn=0;pn<25;pn++)
        printf(" ");
    printf("��������˵��\n\n");
    for(pn=0;pn<15;pn++)
        printf(" ");
    printf("[A]--�µ�����\n");
    for(pn=0;pn<15;pn++)
        printf(" ");
    printf("[B]--�ɵĻ���\n");
    for(pn=0;pn<15;pn++)
        printf(" ");
    printf("[C]--����ɽ��\n");
    printf("\n\n\n") ;
    for(pn=0;pn<60;pn++)
        printf("*");
}

void Show_main_dh()
{
    system("cls");//����
    int pn;
    system("color 31");
    for(pn=0;pn<60;pn++)
        printf("*");
    printf("\n\n\n");
    for(pn=0;pn<15;pn++)
        printf(" ");
    sttdy("��ӭ���롾������˵��",50,500);

    printf("\n\n\n");
    for(pn=0;pn<60;pn++)
        printf("*");
    //Sleep(1000);

}

void Show_main_menu_end()
{
    int sure;
    //sure=MessageBox(NULL,"��ȷ��Ҫ�˳���Ϸ��","�˳�ȷ��",MB_YESNO);
    sure=MessageBox(NULL,"��ȷ��Ҫ�˳���Ϸ��","�˳�ȷ��",MB_YESNO);
    if(sure==IDYES)
        exit(1);
}

void Show_main_god_here()
{
    MessageBox(NULL,"��ϲ����ʿ����ɹ����أ����õ����ؽ�����","���ؽ���",MB_OK);
    system("start www.nextgod.com");
}


