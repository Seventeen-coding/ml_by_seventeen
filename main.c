/*������˵���ְ�  V2016/6/27  By Seventeen  */
/*�ع��� 2016/8/17    By Seventeen                       */

#include "main.h"

int main (int argc, char *argv[])
{
    //init_game_env();/*�������е�����Ϸ�ⲿ�޹ص����� �細�ڴ�С ��� ������ɫ�� ˼ά: �ԡ���Ϸ�� Ϊ˼��ȥ�������ӿ� */

    do{
        game_start();
        // return 0;         //coding  start
        if(game_status_get() == GAME_TEST)
        {
            game_test_run();           //ÿ����һ��ģ����testģ��������� �����߿���Ч��
            continue;
        }
        game_run();

        /*
        ret = welcome_get_node(&node);
        if(ret != RET_WELCOME_OK)   break;   //error

    */
        game_end();
    }while(0);//game_status_get() != GAME_EXIT );
    return 0;
}


