
#include "window/include/shop_window.h"


void Show_shop_item_window()
{
    system("cls"); //����
    int pn;
    btdy("$","�����̵�");
    printf("\n[W]--ҩƷ  |  [E]--����  |  [R]--�汦 |  [S]--����  |  [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("-");
    printf("\n���� ��Ʒ��    �۸�    ��๺�򣨸���\n");
    int n=1;
    int i;
    item_t *item_list = Get_item_list();
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 1 && item_list[i].cbuy == 1)
        {
            printf("\n[%d]---%s     %d���        %d",n++,item_list[i].name,item_list[i].mgold,item_list[i].mhave-item_list[i].haved);
        }
    }
}

void Show_shop_weapon_window()
{
    system("cls"); //����
    int pn;
    btdy("$","�����̵�");
    printf("\n[W]--ҩƷ  |  [E]--����  |  [R]--�汦 |  [S]--����  |  [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("-");
    printf("\n���� ��Ʒ��    �۸�    ��๺�򣨸���\n");
    int n=1;
    int i;
    item_t *item_list = Get_item_list();
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 2 && item_list[i].cbuy == 1)
        {
            printf("\n[%d]---%s     %d���        %d",n++,item_list[i].name,item_list[i].mgold,item_list[i].mhave-item_list[i].haved);
        }
    }

}

void Show_shop_accessories_window()
{

    system("cls"); //����
    int pn;
    btdy("$","�����̵�");
    printf("\n[W]--ҩƷ  |  [E]--����  |  [R]--�汦 |  [S]--����  |  [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("-");
    printf("\n���� ��Ʒ��    �۸�    ��๺�򣨸���\n");
    int n=1;
    int i;
    item_t *item_list = Get_item_list();
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 3 && item_list[i].cbuy == 1)
        {
            printf("\n[%d]---%s     %d���        %d",n++,item_list[i].name,item_list[i].mgold,item_list[i].mhave-item_list[i].haved);
        }
    }
}
