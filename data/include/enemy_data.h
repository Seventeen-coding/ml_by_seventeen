#ifndef ENEMY_DATA_H
#define ENEMY_DATA_H
#include "data/include/base_data.h"
#include "data/include/place_data.h"

typedef struct {
    char name[30];
    char talk[200];
    int level;
    int ATK;
    int DEF;
    int SPE;
    int HP;
    int HP_Max;
    int MP;
    int MP_Max;
    int EXP;
    int GOLD;
    int hyp;
    int hwp;
    int hqb;
    int allow_run;
}enemy_t;
//����ṹ�����ƣ��������ȼ����������������ٶȣ�Ѫ�����Ѫ��ħ�����ħ��Я�����飬Я����ң��������ҩƷ��1�У����������������汦���������ܣ�1����


enemy_t*Get_enemy(int num);
void Set_fight_enemy(int num);
enemy_t * Get_fight_enemy_info();
void Init_place_enemy(list_node *place_enemy_list,int num);

#endif // ENEMY_DATA_H

