#include "moving.h"
#include "valueSet.h"

int  moving(int miss,char p[yLine][xLine])
//将最后一行置空，并使所有在数组中其他行的字符下落一行
{
    int i,j;
    char w;
    for(j=1,i=yLine-1;j<xLine-1;j++)
    //遍历最后一行的所有字符，如果该字符非空则将其置空并使miss加1
    {
        if(p[i][j]!=' ')
        {
            miss++;
            p[i][j]=' ';
        }
    }
    for(i=yLine-2;i>=0;i--)
    //从倒数第二行的最后一个字符开始开始向前遍历该数组内的元素，如果该位置非空则将该字符移动至下一行
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

