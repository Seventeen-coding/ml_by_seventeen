
#include "window/include/hero_window.h"

void Show_create_hero_window()
{
    system("cls");//����
    ttdy("��ӭ�㣡��ʿ���������������֣�","����ʿע�᡿",1,0,0,0);
}

void Show_hero_info_window()
{
    system("cls");//����
    hero_t * hero_p =  Get_current_hero_info();
    ttdy("","����ɫ��Ϣ��",1,0,0,0);
    printf("\n\n������%s",hero_p->name);
    printf("\n\n�ȼ�:%d (%d/%d)",hero_p->level,hero_p->EXP,hero_p->UP_GRADE);
    printf("\nѪ��:%d/%d    ħ��:%d/%d",hero_p->HP,hero_p->HP_Max,hero_p->MP,hero_p->MP_Max);
    printf(" \n������:%d \n����:%d \n�ٶ�:%d",hero_p->ATK,hero_p->DEF,hero_p->SPE);
    printf(" \n����:%d \n���:%d  ",hero_p->LUC,hero_p->GOLD);
    printf("\n\n[W]--װ��         [Y]--��Ʒ     ");
    printf("\n\n[K]--����         [Q]--����     ");
}

void Show_hero_weapon_window()
{
    system("cls");//����
    int pn_a=1,pn; //�����жϡ���ʱ
    char ch;
    date_check();
    btdy("=","����");
    printf("\n[W]--ҩ | [E]--���� | [R]--�汦 | [S]--�̵� | [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("=");
    printf("\n���� ��Ʒ��         �۸�         ��ǰӵ�У�����\n");
    item_t *item_list = Get_item_list();
    int n=1;
    int i ;
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 1 && item_list[i].haved > 0 )
        {
            printf("\n[%d]---%s     %d���        %d��",n++,item_list[i].name,item_list[i].mgold,item_list[i].haved);
        }
    }
    if(n==1)
        printf("\nû���κ�������");
}

void Show_hero_accessories_window()
{
    system("cls");//����
    int pn_a=1,pn; //�����жϡ���ʱ
    char ch;
    date_check();
    btdy("=","����");
    printf("\n[W]--ҩ | [E]--���� | [R]--�汦 | [S]--�̵� | [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("=");
    printf("\n���� ��Ʒ��         �۸�         ��ǰӵ�У�����\n");
    item_t *item_list = Get_item_list();
    int n=1;
    int i ;
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 2 && item_list[i].haved > 0 )
        {
            printf("\n[%d]---%s     %d���        %d��",n++,item_list[i].name,item_list[i].mgold,item_list[i].haved);
        }
    }
    if(n==1)
        printf("\nû���κ��汦��");
}

void Show_hero_item_window()
{
    system("cls");//����
    int pn_a=1,pn; //�����жϡ���ʱ
    char ch;
    date_check();
    btdy("=","����");
    printf("\n[W]--ҩ | [E]--���� | [R]--�汦 | [S]--�̵� | [Q]--���ز˵�\n");
    for(pn=0;pn<60;pn++)
        printf("=");
    printf("\n���� ��Ʒ��         �۸�         ��ǰӵ�У�����\n");
    item_t *item_list = Get_item_list();
    int n=1;
    int i ;
    for(i = 0;i < 200; i++){
        if(item_list[i].zyk == 2 && item_list[i].haved > 0 )
        {
            printf("\n[%d]---%s     %d���        %d��",n++,item_list[i].name,item_list[i].mgold,item_list[i].haved);
        }
    }
    if(n==1)
        printf("\nû���κ���Ʒ��");
}

void Show_upgrade_window()
{
    hero_upgrade();
    hero_t * hero_p =  Get_current_hero_info();
    btdy("-","������������");
    printf("\n��ϲ�㣬��ʿ����������%d����",hero_p->level);
    printf("\n\n����+5\n����+4\n�ٶ�+2\n����+1\n ");
}




