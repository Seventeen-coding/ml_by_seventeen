#include "window/include/city_window.h"

void Show_city_menu()
{
    system("cls");//����
    int pn;
    date_check();
    system("color 30");
    printf("\n");
    for(pn=0;pn<25;pn++)
        printf(" ");
    printf("��������˵��\n");
    for(pn=0;pn<60;pn++)
        printf("-");
    hero_t *hero_p = Get_current_hero_info();
    printf("\n\n��ʿ��%s (1��)",hero_p->name);
    printf("\n\n[A]--������Ϣ\t[B]--���� \t [C]--�̵�");
    printf("\n\n[D]--��ս����\t[E]--���� \t[F]--����");
    printf("\n\n[G]--С��Ϸ\t[S]--��Ϣ \t [H]--����");
}

