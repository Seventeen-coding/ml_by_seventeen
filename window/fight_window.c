#include "window/include/fight_window.h"

void Show_result()
{
    fight_result_t *result= Get_fight_result();
    hero_t * hero  = Get_current_hero_info();
    enemy_t *enemy = Get_fight_enemy_info();
    gsdy("-",60);
    printf("\n\t���������%s��ʧ��%d\n",enemy->name,result->hero_attack);
    printf("\n\t          %s��ʧ: %d\n",hero->name,result->enemy_attack);
}

void Show_fight_window()
{
    place_t  *current_place = Get_current_place();
    enemy_t *enemy = Get_fight_enemy_info();
    hero_t * hero  = Get_current_hero_info();
    btdy("-","��ս��ing��");
    printf("\n%s:%s",enemy->name,enemy->talk);
    gsdy("-",60);
    printf("\n[%8.8s]\t��VS��\t[%8.8s]\n",hero->name,enemy->name);
    printf("\n��ʿHP:%d\t  |\t����HP:%d",hero->HP,enemy->HP);
    printf("\n��ʿMP:%d",hero->MP);
    printf("\n");
    gsdy("-",60);
}

void Show_action()
{
    printf("\n[X]--��ͨ����    [S]--����   [F]--����   [R]--����");
    printf("\n\t[Z]--�鿴������Ϣ    [Q]--������ҳ");
}
void Show_hero_win()
{
    //�������Ū��һ������ݺ�ͼ�η��� �޸�һ�½ӿھͿ�����
    enemy_t *enemy = Get_fight_enemy_info();
    hero_t * hero  = Get_current_hero_info();
    btdy("-","��ս��ʤ������");
    printf("\n��սʤ�� %s",hero->name);
    printf("\n��ս����:");
    printf("\n��þ���:%d",enemy->EXP);
    printf("\n��ý��:%d",enemy->GOLD);
    Set_hero_EXP(hero->EXP+enemy->EXP);
    Set_hero_GOLD(hero->GOLD+enemy->GOLD);
}
void Show_enemy_win()
{
    enemy_t *enemy = Get_fight_enemy_info();
    btdy("-","��ս��ʧ�ܣ���");
    printf("\n%s:�����������ң���ȥ����������ɣ�",enemy->name);
    printf("\n\n��ʿ��ʧ���ǳɹ������裬�����Ŭ����");
    printf("\n\n�ﰴ������ص����硣");
}
