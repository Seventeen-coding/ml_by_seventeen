#include "map/include/sl_map.h"


void Enter_SL_select()
{
    switch (getch()) {
    case 's': case 'S':
       Save_map();
        break;
    case 'r': case 'R':
        Load_map();
        break;
    case 'q' :case 'Q':
        break;
    default:
        break;
    }
}
void Save_Load_map()
{
   // Show_Save_Load_window();
    Enter_SL_select();
}

int Enter_load_select()
{
    switch(getch())
    {

    }
}

void Load_map()
{
    Show_Load_window();
    //Enter_load_select();
    printf("\n������ȡ�У����Ժ�\n\t");
    sttdy(".............",30,0);
    if(SL_load_data()   !=  0)
    {
        printf("\n�ļ��ر�ʧ�ܣ�");
        //Set_current_map();// datdell();
        getch();
        return;
    }
    printf("\n������ȡ�ɹ���");
    Set_current_map(City_map);
    getch();
}
void Save_map()
{
    Show_Save_window();
    //Enter_save_select();
    printf("\n�����洢�У����Ժ�\n\t");
    sttdy(".............",30,0);
    if(SL_save_data() != 0)
    {
        printf("\n����д��ʧ�ܣ�");
        getch();
        return;
    }
    printf("\n�����洢�ɹ���");
    getch();
}
