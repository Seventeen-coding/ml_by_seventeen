#include "window/include/window.h"
void btdy(char btfh[],char bttitle[])//�����ӡ����
{
    system("cls");
    int pn;
    printf("\n");
    for(pn=0;pn<25;pn++)
        printf(" ");
    printf("%s",bttitle);
    printf("\n");
    for(pn=0;pn<60;pn++)
        printf("%s",btfh);
    printf("\n");
}



void ttdy(char main_t[],char m_title[],int clspa,int clspb,int timep,int ptime)//��̬��ӡ������ͨ�ã� ��ӡ���塢���⡢����ȷ�ϣ�clspa=1��ʾǰ������clspb=1��ʾ������,�����ٶȣ�������ͣʱ��
{
    if(clspa==1)
    {system("cls");}
    int len,pn;
    len=strlen(main_t);
    for(pn=0;pn<15;pn++)
        printf(" ");
    printf("%s\n",m_title);
    for(pn=0;pn<len;pn++)
    {
        if(pn%40==0)
            printf("\n\n");
        printf("%c",main_t[pn]);
        Sleep(timep);}
    if(clspb==1)
    {system("cls");}
    Sleep(ptime);
}

void sttdy(char stt[],int timep,int ptime)//��һ��ӡ����
{
    int pn,len;
    len=strlen(stt);
    for(pn=0;pn<len;pn++)
    {
        if(pn%40==0)
            printf(" ");
        printf("%c",stt[pn]);
        Sleep(timep);

    }
    Sleep(ptime);
}

void skdy(char skt[])//����˵�������ӡ
{
    int pn,len;
    len=strlen(skt);
    printf("   ");
    for(pn=0;pn<len;pn++)
    {
        printf("%c",skt[pn]);
    }

}

void gsdy(char gst[],int len)//��ӡ�����
{
    int pn;
    printf("\n");
    for(pn=0;pn<len;pn++)
        printf("%s",gst);
}


void errdy(char etext[],char e_title[],char e_class[],int clsup)//������
{
    int pn=0,len;
    system("color c0");
    if(clsup==1)
    {system("cls");}
    printf("\n\n\a");
    for(pn=0;pn<20;pn++)
        printf(" ");
    printf("%s\n",e_title);
    for(pn=0;pn<50;pn++)
        printf("*");
    printf("\n\n������ȼ�����%s\n\n",e_class);
    printf("������ԭ�򡿣�\n ");
    len=strlen(etext);
    for(pn=0;pn<=len;pn++)
    {
        if(pn%41==0)
            printf("\n");
        printf("%c",etext[pn]);
    }
    getch();
}

