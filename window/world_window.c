#include "window/include/world_window.h"


void Show_world_window()
{
    system("cls");//����
    btdy("-","������ս����");
    printf("\n");
    printf("\n\n\t[A]--Ҷ����        [B]--����ɳĮ");
    printf("\n\n\t[C]--�����ɹ�      [D]--��������");
    printf("\n\n\t[E]--ˮ����        [F]--������");
    printf("\n\n\t[G]--����ħ����    [Q]--�س�");
}

void Show_world_place(int num)
{
    place_t *place = Get_place(num);
    btdy("-",place->name);
    printf("%s",place->info);
    gsdy("-",60);
    printf("\n����չ������ʹ˹ֵ�ս������Q��-���ص�ͼ");
    gsdy("-",60);
    int i ;
    int enemy_index = 0;
    enemy_t *enemy;
    list_node *enemy_list_head = place->enemy_list;
    while(enemy_list_head->next != NULL)
    {
        enemy_list_head = enemy_list_head->next;
        if(enemy_index%2==0)
            printf("\n\n");
        enemy = (enemy_t *)enemy_list_head->data;
        printf("\t[%d]--%s",++enemy_index,enemy->name);
    }
}
