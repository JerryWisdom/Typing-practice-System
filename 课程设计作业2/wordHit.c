#include "wordHit.h"

int wordHit(char p[yLine][xLine])
//判断是否有字符从键盘键入。如果有，则从最后一行的最后一个元素开始遍历该数组，找出该字符，并把对应位置置空，且返回1
//如果有输入，但屏幕上无对应项，或无输入则返回0 ，输入的是小写字母，屏幕为大写字符
{
    int i,j;
    char key;
    if(kbhit())      //判断用户是否从键盘键入字符。如果kbhit返回值为
        key=getch();
    if(key)
    {
        if(key=='0')
            leave();
        if(key=='1')
        {
            system("cls");
            printf("按任意键继续打字游戏.");
            getch();
        }
        for(i=yLine;i>0;i--)
        {
            for(j=xLine;j>0;j--)
            {
                if(key-32==p[i-1][j-1])
                {
                    p[i-1][j-1]=' ';
                    return (true);
                }
            }
        }
    }
    return (false);
}
