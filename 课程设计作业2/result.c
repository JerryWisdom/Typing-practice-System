#include "result.h"

int result(int right)
//判断该次的成绩并输出对应的结果，询问用户是否继续，若继续，判断是否可以进入下一级别
{
    int score;
    char yn;
    score=right*100/full;      //敲对一个得5分
    system("cls");
    if(score==100)
        printf("\n\n\n\n\n\n\n\n\n\t 你的得分：%d\n\t 太棒了，恭喜你满分！\n",score);
    else if(score>=85)
        printf("\n\n\n\n\n\n\n\n\n\t 你的得分：%d\n \t 很好，继续努力哦!\n",score);
    else if(score>=70)
        printf("\n\n\n\n\n\n\n\n\n\t 你的得分：%d\n\t 你的打字效果一般哦!\n",score);
    else
        printf("\n\n\n\n\n\n\n\n\n你的得分：%d\n\t你可能得加油咯!\n",score);
    printf("\n\n          请问，你还想继续吗？\n\n          继续按Y\n          结束按N\n");
    for (;;)
    {
        yn=getch();
        switch(yn)
        {
            case 'y' :
            {
                if(score>=60)
                    return(true);
                else
                    return(false);
            }
            case 'n' :
                leave ();
            default  :
                printf("\n\n\n\n\n\n\n\n\n\n     请输入一个正确的选项:");
        }
    }
}




