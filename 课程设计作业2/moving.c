#include "moving.h"
#include "valueSet.h"

int  moving(int miss,char p[yLine][xLine])
//�����һ���ÿգ���ʹ�����������������е��ַ�����һ��
{
    int i,j;
    char w;
    for(j=1,i=yLine-1;j<xLine-1;j++)
    //�������һ�е������ַ���������ַ��ǿ������ÿղ�ʹmiss��1
    {
        if(p[i][j]!=' ')
        {
            miss++;
            p[i][j]=' ';
        }
    }
    for(i=yLine-2;i>=0;i--)
    //�ӵ����ڶ��е����һ���ַ���ʼ��ʼ��ǰ�����������ڵ�Ԫ�أ������λ�÷ǿ��򽫸��ַ��ƶ�����һ��
    {
        for(j=xLine-2;j>0;j--)
        {
            if(p[i][j]!=' ')
            {
                w=p[i][j];
                p[i][j]=' ';
                p[i+1][j]=w;
            }
        }
    }
    return (miss);
}

