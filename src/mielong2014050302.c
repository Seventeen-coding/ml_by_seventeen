
#include "main.h"
int shop_n,spn_a,spn_b,spn_c,spn_n,spback_n; //�̵������жϲ���
int wpinfo_n,wpback_n=0,wp_run_n;//��Ϣ������ʾ�˵�ֵ��1��ʾʹ�ã�2��ʾ����
int sp_a[10],sp_b[10],sp_c[10];//�б������Ʒ�ж�
int sk_n,skback_n=0,skill_n=0;  //���ܲ���������ֵ��0����������Ϣ��1����ս������
int pkmenu_n=0,here_ghp,pkstart=0;//PK�˵���ʾ�жϣ�0����ʾ���أ�1�����ٷ��ء�
int getgj,getfy,getspeed,getsk,gethp;
int lgj=1,lfy=1,lspeed=1;//���ܲ�������ʱ����
int lggj=1,lgfy=1,lgspeed=1;//���ܲ����Ĺ�����ʱ����
int getggj,getgfy,getgspeed,getgsk,getghp;//ս���������
int cityk_n;//���з���ȫ�ֲ���
int dat_back=0;//���غδ�����
int upcheck_k=0; //�����������ظ�
int shop_back=0;//�̵귵��

char main_t[700]="�Թž�����Ҫ��������ʿ������Ҳ���������������Ĵ�˵���������ʣ��ܹ���Ϊ����֮�ˣ��ض��ܹ��������£�����ǧ�š�����������˵���Ĺ��£��Ϳ�ʼ����������ʼ���㡣����";
char main_t_title[30]="��������˵����Ϸ��V1.5";
int main_pd=1,welcome_n=1;//�������������ж�



void datdell()
{
    /*
    cls;
    system("color 30");
    btdy("-","����������");
    printf("\n��ѡ��˵����е���������");
    printf("\n\n\nS--�洢����");
    printf("\tR--��ȡ����");
    printf("\n\n   Q--�������˵�");
    while(1)
    {
        char ch;
        ch=getch();
        if(ch=='s'||ch=='S')
            save_dat();
        if(ch=='r'||ch=='R')
            //		read_dat();
            if(ch=='q'||ch=='Q')
                menuf();
    }
    datdell();

*/
}







void pkwin(int bhao)  //ս��ʤ�� 
{
    /*
    int rand_pk;
    int pn_yp,pn_wq,pn_qb;
    int pna,pnb,pnc,pn_a=0,pn_b=0,pn_c=0;
    int pn[10];
    btdy("-","��ս��ʤ������");
    printf("\n��սʤ�� %s",ggw[bhao].name);
    printf("\n��ս����:");
    printf("\n��þ���:%d",ggw[bhao].hexp);
    printf("\n��ý��:%d",ggw[bhao].hgold);
    rand_pk=rand()%8+1;
    if(rand_pk==1)//������ܻ�ý���
 {
    if(ggw[bhao].hyp==1)
    {
        for(pna=0;pna<200;pna++)
          if(gwp[pna].zyk==1)
          {
            pn[pn_a]=pnc;
            pn_a++;
          }
          pn_yp=rand()%pn_a+1;
          gwp[pn_yp].haved+=1;
          printf("\n��ã�%s*1",gwp[pn_yp].name);
    }
    if(ggw[bhao].hwp==1)
    {
        for(pnb=0;pnb<200;pnb++)
          if(gwp[pnb].zyk==2)
          {
            pn[pn_b]=pnc;
            pn_b++;
          }
          pn_wq=rand()%pn_b+1;
          gwp[pn_wq].haved+=1;
          printf("\n��ã�%s*1",gwp[pn_wq].name);
    }
    if(ggw[bhao].hqb==1)
    {
        for(pnc=0;pnc<200;pnc++)
          if(gwp[pnc].zyk==3)
          {
            pn[pn_c]=pnc;
            pn_c++;
          }
          pn_qb=rand()%pn_c+1;
          gwp[pn_qb].haved+=1;
          printf("\n��ã�%s*1",gwp[pn_qb].name);
    }
 }

    getch();
    gplay[c_play].exp+=ggw[bhao].hexp;
    gplay[c_play].gold+=ggw[bhao].hgold;
    upcheck();
    */

}



void pklost(int bhao)//ս��ʧ�� 
{
    btdy("-","��ս��ʧ�ܣ���");
    printf("\n%s:�����������ң���ȥ����������ɣ�",ggw[bhao].name);
    printf("\n\n��ʿ��ʧ���ǳɹ������裬�����Ŭ����");
    printf("\n\n�ﰴ������ص����硣");
    getch();
}

void gwinfo(int bhao)//������Ϣ�鿴 
{
    btdy("-","��������Ϣ�鿴��");
    printf("\n\n����:%s",ggw[bhao].name);
    printf("\n�ȼ�:%d",ggw[bhao].dj);
    printf("\n������:%d",ggw[bhao].gj);
    printf("\n������:%d",ggw[bhao].fy);
    printf("\n�ٶ�  :%d",ggw[bhao].speed);
    printf("\nѪ��  :%d",ggw[bhao].hp);
    printf("\nħ��ֵ:%d",ggw[bhao].mp);
    printf("\n����ֵ:%d",ggw[bhao].hexp);
    printf("\n���  :%d",ggw[bhao].hgold);
    if(ggw[bhao].allow_run==1)
        printf("\n�����⡿�����������ܣ�");
    printf("\n���ܵ��䣺");
    if(ggw[bhao].hyp==1)
        printf("\n\t��ҩƷ��");
    if(ggw[bhao].hwp==1)
        printf("\n\t��������");
    if(ggw[bhao].hqb==1)
        printf("\n\t���汦��");
    printf("\n���������ս�����档");
    getch();

}



void skill()//���� 
{
    /*
    int pn=0;
    char ch;
    cls;
    btdy("-","�����ܡ�");
    printf("\n�ﰴ��Ӧ���ּ�����ʾ��ϸ����Q����������ҳ��");
    gsdy("-",60);
    printf("\n\n���� | ��������| ��ҪMP|��ѧ�ȼ�|˵��               |����");
    gsdy("-",60);
    for(pn=0;pn<9;pn++)
    {
    printf("\n[%d]---%s\t%d\t%d��   %.16s...",pn+1,gskill[pn].name,gskill[pn].nmp,gskill[pn].ndj,gskill[pn].info);
    if(gplay[c_play].dj>=gskill[pn].ndj)
    printf(" ����ѧ��");
    }
while(1)
{
    ch=getch();
    if(ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
      {
        sk_n=ch-49;
        skillinfo(sk_n);
      }
    if(ch=='q'||ch=='Q')
      {
      if(skback_n==0)
      peoinfo();
      if(skback_n==1)
      pkload(wp_run_n);
      }

}
skill();
*/
}


void skillinfo(int bhao)//������Ϣ�鿴���ͷţ�֧���жϼ��޺�ħ��ֵ�۳��� 
{
    /*
    cls;
    char ch;
    btdy("-","��������ϸ��");
    printf("\n");
    printf("\n%s",gskill[bhao].name);
    if(gskill[bhao].ndj<=gplay[c_play].dj)
        printf("  ����ѧ�᡿\n\n");
    else
        printf("   ��δ���ա�\n\n");
    skdy(gskill[bhao].info);
    printf("\n\n���ã�\n");
    if(gskill[bhao].jhp>0)
        printf("\n\tHP+%d",gskill[bhao].jhp);
    if(gskill[bhao].jgj>0)
        printf("\n\t����+%d��",gskill[bhao].jgj);
    if(gskill[bhao].jfy>0)
        printf("\n\t����+%d��",gskill[bhao].jfy);
    if(gskill[bhao].jspeed>0)
        printf("\n\t�ٶ�+%d��",gskill[bhao].jspeed);
    if(gskill[bhao].jluck>0)
        printf("\n\t����+%d��",gskill[bhao].jluck);
    if(skill_n==1)
        printf("\n\nY--�ͷ�       N--����ս��");
    if(skill_n==0)
        printf("\n\n��Q��--���ؼ��ܲ˵�");
    while(1)
    {
        ch=getch();
        if(ch=='y'&&skill_n==1||ch=='Y'&&skill_n==1)
        {
            if(gskill[bhao].ndj<=gplay[c_play].dj&&gskill[bhao].jhp<=0)
            {
                if(gplay[c_play].mp-gskill[bhao].nmp<0)
                {
                    printf("\n��ħ��ֵ���㣡��");
                    getch();
                    skill();
                }
                lgj=gskill[bhao].jgj;
                lfy=gskill[bhao].jfy;
                lspeed=gskill[bhao].jspeed;
                gplay[c_play].mp-=gskill[bhao].nmp;
                pkstart=1;
                printf("\n��%s���ͷųɹ���",gskill[bhao].name);
                getch();
                pkload(wp_run_n);
            }
            if(gskill[bhao].ndj<=gplay[c_play].dj&&gskill[bhao].jhp>0)
            {
                if(gplay[c_play].mp-gskill[bhao].nmp<0)
                {
                    printf("\n��ħ��ֵ���㣡��");
                    getch();
                    skill();
                }
                if((gplay[c_play].hp+gskill[bhao].jhp)>(gplay[c_play].hpmax+20))
                {
                    printf("\n��Ѫ���㹻��������ӡ�");
                    getch();
                    skill();
                }
                lgj=gskill[bhao].jgj;
                lfy=gskill[bhao].jfy;
                lspeed=gskill[bhao].jspeed;
                gplay[c_play].hp+=gskill[bhao].jhp;
                gplay[c_play].mp-=gskill[bhao].nmp;
                printf("\n��%s���ͷųɹ���",gskill[bhao].name);
                getch();
                pkload(wp_run_n);


            }
            else
            {
                printf("\n���ȼ����㣬�˼������������ͷţ���");
                getch();
                skill();
            }

        }
        if(ch=='n'&&skill_n==1||ch=='N'&&skill_n==1)
            pkload(wp_run_n);
        if(ch=='q'&&skill_n==0||ch=='Q'&&skill_n==0)
            skill();



    }
*/
}



void usewp(int bhao)//ʹ����Ʒ 
{
    /*
    btdy("=","��ʹ����Ʒ��");
    printf("\n%s",gwp[bhao].name);
    printf("ʹ�óɹ���");
    printf("\n\n���Ч����");
    if(gwp[bhao].jhp>0)
    {
        /*                                                                 //��ʱ�������
      if((gplay[c_play].hp+gwp[bhao].jhp)>gplay[c_play].hpmax)
      {
        printf("\nѪ���㹻��������ӣ�");
        getch();
        wpinfo(bhao);
      }
      */
/*
        gplay[c_play].hp+=gwp[bhao].jhp;
        printf("HP+%d",gwp[bhao].jhp);
    }
    if(gwp[bhao].jmp>0)
    {gplay[c_play].mp+=gwp[bhao].jmp;
        printf("  MP+%d",gwp[bhao].jmp);}
    if(gwp[bhao].jgj>0)
    {gplay[c_play].gj+=gwp[bhao].jgj;
        printf("  ����+%d",gwp[bhao].jgj);}
    if(gwp[bhao].jfy>0)
    {gplay[c_play].fy+=gwp[bhao].jfy;
        printf("  ����+%d",gwp[bhao].jfy);}
    if(gwp[bhao].jspeed>0)
    {gplay[c_play].speed+=gwp[bhao].jspeed;
        printf("  �ٶ�+%d",gwp[bhao].jspeed);}
    if(gwp[bhao].jluck>0)
    {gplay[c_play].luck+=gwp[bhao].jluck;
        printf("  ����+%d",gwp[bhao].jluck);}

    gwp[bhao].haved-=1;
    getch();
    if(gwp[bhao].haved<1)
        wupin();
    wpinfo(bhao);

*/
}



void wpinfo(int bhao)//��Ʒ��Ϣ�鿴��������Ʒ��� 
{
    /*
    int pn;
    char ch;
    btdy("-","����Ʒ��Ϣ��");
    printf("\n���ƣ�%s",gwp[bhao].name);
    if(gwp[bhao].cshop!=1)
        printf("�����ɳ��ۣ�");
    printf("\n\nƷ�ʣ�%s",gwp[bhao].pinzhi);
    printf("\n�۸�%d���     ӵ�У�%d ��",gwp[bhao].mgold,gwp[bhao].haved);
    printf("\n���ã�");
    if(gwp[bhao].jhp>1)
        printf("\n\n\tHP+%d",gwp[bhao].jhp);
    if(gwp[bhao].jmp>1)
        printf("\n\tMP+%d",gwp[bhao].jmp);
    if(gwp[bhao].jgj>1)
        printf("\n\t����+%d",gwp[bhao].jgj);
    if(gwp[bhao].jfy>1)
        printf("\n\t����+%d",gwp[bhao].jfy);
    if(gwp[bhao].jspeed>1)
        printf("\n\t�ٶ�+%d",gwp[bhao].jspeed);
    if(gwp[bhao].jluck>1)
        printf("\n\t����+%d",gwp[bhao].jluck);
    if(gwp[bhao].jbaoj>1)
        printf("\n\t����+%d",gwp[bhao].jbaoj);
    printf("\n\n\t*ռ�ð�����%d��",gwp[bhao].nbag);
    if(wpinfo_n==1)
        printf("\n\n\t[B]--����   [Q]--�����̵�");
    if(wpinfo_n==2)
        printf("\n\n\t[K]--ʹ��   [P]--����      [Q]--������Ʒ");
    while(1)
    {
        ch=getch();
        if(ch=='b'||ch=='B')
            buywp(bhao);
        if(ch=='q'||ch=='Q')
        {
            if(spback_n==1)
                shopc();
            if(spback_n==2)
                peoinfo();
            if(spback_n==3)
                wupin();
        }
        if(ch=='k'||ch=='K')
            usewp(bhao);
        if(ch=='p'||ch=='P')
        { if(gwp[bhao].cshop!=1)
            {
                printf("\n\n\t�����桿����Ʒ�޷����ۣ�");
                getch();
                wpinfo(bhao);
            }
            pwp(bhao);
        }
    }
*/
}

void pwp(int bhao)//������Ʒ 
{
    /*
    int pn,n=0;
    char ch;

    while(1)
    {
        cls;
        btdy("-","����ȷ��");
        printf("\n�밴��ȷ�����۸�������ǰӵ�У�%d��������):",gwp[bhao].haved);
        printf("\n\n[W]--��  [S]--��  [�ո��]--ȷ�ϳ���   [Q]--����");
        printf("\n\n��ǰ׼�����ۣ�%d  ��",n);
        ch=getch();
        if(ch=='w')
        {
            if(n>gwp[bhao].haved-1)
            {
                printf("\n�ѵ������ֵ!");
                getch();
            }
            else
                n=n+1;
        }
        if(ch=='s')
        {
            if(n<1)
            {
                printf("\n�Ѵﵽ��Сֵ��");
                getch();
            }
            else
                n=n-1;
        }
        if(ch==' ')
            break;
        if(ch=='q')
            wpinfo(bhao);
    }
    printf("\n��ȷ��Ҫ����%d��%s?�ɻ��%d���",n,gwp[bhao].name,n*gwp[bhao].mgold);
    printf("\n\n[Y]-ȷ��   [N]-����");
    while(1)
    {
        ch=getch();
        if(ch=='y'||ch=='Y')
        {
            gwp[bhao].haved-=(n);
            gplay[c_play].gold+=n*gwp[bhao].mgold;
            printf("\n���۳ɹ���");
            getch();
            wupin();
        }
        if(ch=='n'||ch=='N')
            wpinfo(bhao);
    }
*/
}


void buywp(int bhao)// ��Ʒ�����ж���������Ʒ��Ų��� 
{
    /*
    int n=0,pn;
    char ch;
    while(1)
    {
        cls;
        btdy("-","������Ʒ");
        printf("\n������������ӵ�н�ң� %d �� ",gplay[c_play].gold);
        printf("\n��%s�� ��� %d /��",gwp[bhao].name,gwp[bhao].mgold);
        printf("\n\n[W]--��  [S]--��  [�ո��]--ȷ�Ϲ���   [Q]--����");
        printf("\n\n��ǰ׼������%d  ��",n);
        ch=getch();
        if(ch=='w')
        {
            n=n+1;
        }
        if(ch=='s')
        {
            if(n<1)
            {
                printf("\n�Ѵﵽ��Сֵ��");
                getch();
            }
            else
                n=n-1;
        }
        if(ch==' ')
            break;
        if(ch=='q')
            wpinfo(bhao);
    }
    if(n<=0||n>1000)
    {
        printf("\n���������ѡ�����0����С��1000����Ŀ��");
        getch();
        buywp(bhao);
    }
    if((gplay[c_play].gold-pn)<0)
    {
        printf("\n��������Ľ�Ҳ���Ŷ��");
        getch();
        wpinfo(bhao);
    }
    if((gwp[bhao].haved+n)>gwp[bhao].mhave)
    {printf("\n����໹�ܹ���%s��%d����",gwp[bhao].name,gwp[bhao].mhave-gwp[bhao].haved);
        getch();
        wpinfo(bhao);
    }
    pn=gwp[bhao].mgold*n;
    gplay[c_play].gold-=pn;
    printf("\n����%d��%s�ɹ���",n,gwp[bhao].name);
    printf("\n����%d�����",pn);
    gwp[bhao].haved+=n;
    getch();
    wpinfo(bhao);
    */
}


void upcheck()
{
    /*
    date_check();
    if(gplay[c_play].exp>=gplay[c_play].exped)
    {
        cls;
        gplay[c_play].dj+=1;
        if(gplay[c_play].dj>25&&upcheck_k==0)
        {
            upcheck_k=1;
            god_here();
        }
        gplay[c_play].exp=gplay[c_play].exp-gplay[c_play].exped;
        gplay[c_play].exped=gplay[c_play].dj*100;
        gplay[c_play].gj+=5;
        gplay[c_play].fy+=4;
        gplay[c_play].speed+=2;
        gplay[c_play].luck+=1;
        gplay[c_play].hpmax=gplay[c_play].dj*100;
        gplay[c_play].mpmax=gplay[c_play].dj*50;
        gplay[c_play].hp=gplay[c_play].hpmax;
        gplay[c_play].mp=gplay[c_play].mpmax;
        btdy("-","������������");
        printf("\n��ϲ�㣬��ʿ����������%d����",gplay[c_play].dj);
        printf("\n\n����+5\n����+4\n�ٶ�+2\n����+1\n ");
        getch();
        upcheck();
    }
*/
}

void god_mod()//�ϵ۴��� 
{
    /*
    btdy("-","���ϵ۴��롿");

    if(gplay[c_play].gj>100)
    {
        printf("\n�ϵ۴�����ʧЧ��");
        getch();
        menuf();
    }
    else
    {
        printf("\n�㿴�����ϵۣ���Ĺ�����������10����");
        gplay[c_play].gj*=10;
        getch();
        menuf();
    }
    */
}



void test()//�������� 
{
    int k;
    k=MessageBox(NULL,"�ù�����δ���ţ��Ƿ�������̳�˽������Ϣ��","ϵͳ��ʾ",MB_YESNO|MB_ICONINFORMATION);
    if(k==IDYES)
    {
        system("start www.nextgod.com");
    }
    else
        ;
}

void god_here()//���ؽ��� 
{
    MessageBox(NULL,"��ϲ����ʿ����ɹ����أ����õ����ؽ�����","���ؽ���",MB_OK);
    system("start www.nextgod.com");

}




void date_check()//ϵͳ���ݼ�� 
{
    /*
    if(gplay[c_play].dj>100||gplay[c_play].dj<0||gplay[c_play].gold>200000||gplay[c_play].speed>1000||gplay[c_play].exped<0||gplay[c_play].exped>1000000)
    {
        errdy("���������쳣�����ܴ�������BUG���׻��ߵ�����ȡ�쳣����Ϸ���Զ�����,�밴�չ��������Ϸ!","��BUG���桿","����",0);
        exit(1);
    }
    ;*/
}








