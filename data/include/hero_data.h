#ifndef HERO_DATA_H
#define HERO_DATA_H
#include "data/include/base_data.h"
#include <stdlib.h>
typedef struct{
    char name[20];  //��ɫ��
    //base_t base;
    int level;              //�ȼ�
    int ATK;                //����
    int DEF;                //����
    int SPE;                //�ٶ�
    int LUC;                //����
    int GOLD;           //���
    int yesp;               //�����жϣ� ��yesp=99���ж��û��Ѵ��ڣ���
    int EXP;                //����
    int UP_GRADE;   //��������
    int HP;                    //Ѫ����ħ��ֵ
    int HP_Max;
    int MP;
    int MP_Max;
}hero_t;


hero_t *hero_init(char name[20],int level,int ATK,int DEF,int SPE,int LUC,int GOLD,int yesp,int EXP,int UP_GRADE,int HP,int HP_Max,int MP,int MP_Max);
hero_t *Get_current_hero_info();

void hero_sleep();
void hero_upgrade();
int Check_up_up_grade();
int Set_hero_name(char *name);
int Set_hero_ATK(int ATK);
int Set_hero_DEF(int DEF);
int Set_hero_SPE(int SPE);
int Set_hero_LUC(int LUC);
int Set_hero_EXP(int EXP);
int Set_hero_GOLD(int GOLD);

#endif // HERO_DATA_H

