#include "newWord.h"

int  newWord(int sum,char p[yLine][xLine])
//������һ���µ��ַ�������������������
{
    int j,w;
    if(sum!=full)
    {
        j=(rand()%(xLine-2))+1;
        w=(rand()%26)+65;
        p[0][j]=w;
        return (++sum);
    }
    return (sum);
}
