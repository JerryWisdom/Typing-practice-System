#include "newWord.h"

int  newWord(int sum,char p[yLine][xLine])
//随生成一个新的字符并将其加入数组的首行
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
