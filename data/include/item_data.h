#ifndef ITEM_DATA_H
#define ITEM_DATA_H

typedef struct {
    char name[30];  //��Ʒ��
    char pinzhi[20]; //Ʒ��
    int zyk;    //����ֵ����
    int jhp;    //��Ѫ
    int jmp;    //��ħ
    int jgj;    //�ӹ���
    int jfy;    //�ӷ���
    int jspeed; //���ٶ�
    int jluck;  //������
    int mgold;  //�۸�
    int nbag;   //ռ�ð���
    int jbaoj;  //�ӱ��� ����
    int haved;  //ӵ����
    int mhave;  //���ӵ��
    int cbuy;   //��1����0���ɣ�
    int cshop;  //������1�ɣ�
}item_t;
item_t *Get_item(int num);
item_t *Get_item_list();

#endif // ITEM_DATA_H

