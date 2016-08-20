#ifndef PLACE_DATA_H
#define PLACE_DATA_H
#include "list/list.h"
#include <stdlib.h>
#include "data/include/enemy_data.h"
//��ͼ�ṹ����ͼ������飻������㣬�������������Ƶȼ�
typedef struct {
        char name[30];
        char info[100];
        int sgnum;
        int gnum;
        int ndj;
       list_node *enemy_list;
}place_t;

place_t *Get_place(int num);
place_t *Get_current_place();
list_node *Get_place_list(int num);



#endif // PLACE_DATA_H

