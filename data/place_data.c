#include "data/include/place_data.h"
extern enemy_t enemy[200];
place_t *current_place = NULL;
place_t place[8]={
    {"Ҷ����","�¸£���ӭ̤������֮����",0,4,1},
    {"����ɳĮ","Welcome!������Ⱥ���󺰣�",4,4,3},
    {"�����ɹ�","�����ɹ������µ�һ����",8,4,5},
    {"������Ѩ","����������Ҫ����ô��",12,4,10},
    {"ˮ����","�����ڴˡ������¹�",16,4,15},
    {"������","���������������",20,4,19},
    {"����ħ��","�������������������󣬲������˽����ˣ�",24,4,30},
};//��ͼ���壺��ͼ������飻������㣬�������������Ƶȼ�



static list_node *list = NULL;

place_t *Get_current_place()
{
    return current_place;
}

place_t *Get_place(int num)
{
    //�����д��Ż�
    list_destroy(&place[num].enemy_list);
    place[num].enemy_list = list_create(NULL);
    Init_place_enemy(place[num].enemy_list,num);
    current_place =  &place[num];
    return current_place;
}


list_node *Get_place_list(int num)
{
    return place[num].enemy_list;
}

