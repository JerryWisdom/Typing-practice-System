#include "run.h"

void run()
//开始运行主程序
{
    for (;;)
    {
        sum=0;
        right=0;
        miss=0;
        printf("\n\n    按任意键开始游戏!");
        m=getch();
        printScreen(level,right,sum,p);
        for(n=0,m=4;;n++)
        {
            Sleep(2);        //延迟
            if(m%4==0)       //当上一个字母下落3行时，生成一个新的字母在首行，并刷新屏幕
            {
                sum=newWord(sum,p);
                m=5;
                printScreen(level,right,sum,p);
            }
            if(wordHit(p)==true)
            //如果用户敲对了字符，则使答对的数加1，并刷新屏幕
            {
                right++;
                printScreen(level,right,sum,p);
            }
            if(n==(37-4*level))
            //n控制下落速度，屏幕上的字母下落一行，并刷新屏幕，若字母掉到最后一行，则使错过数加1
            {
                n=0;
                m++;
                miss=moving(miss,p);
                printScreen(level,right,sum,p);
            }
            if(miss==full||right==full)
            //当没有敲对一个字母或者满分时 跳出该循环
                break;
        }

        if (result(right)==true&&level<9)
        //当用户成绩在60以上，并且等级小于9时，等级加一，即进入下一级别
            level++;
    }
}






