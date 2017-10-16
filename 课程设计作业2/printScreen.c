#include "printScreen.h"

void printScreen(int level,int right,int sum,char p[yLine][xLine])
//刷新屏幕的输出图像
{
    int i,j;
    system("cls");
    printf("等级:%d             按0退出;1暂停             得分:%d/%d\n",level,right,sum);
    //输出现在的等级，击中数和现在已下落总数
    printf("----------------------------------------------------------------------\n");
    for (i=0;i<yLine;i++)
    {
        for(j=0;j<xLine;j++)
            printf ("%c",p[i][j]);
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
}
