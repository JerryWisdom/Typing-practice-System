#include "printScreen.h"

void printScreen(int level,int right,int sum,char p[yLine][xLine])
//ˢ����Ļ�����ͼ��
{
    int i,j;
    system("cls");
    printf("�ȼ�:%d             ��0�˳�;1��ͣ             �÷�:%d/%d\n",level,right,sum);
    //������ڵĵȼ�������������������������
    printf("----------------------------------------------------------------------\n");
    for (i=0;i<yLine;i++)
    {
        for(j=0;j<xLine;j++)
            printf ("%c",p[i][j]);
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
}
