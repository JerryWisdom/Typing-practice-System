#include "levelChoice.h"

int levelChoice(int level)
//进入游戏时选择游戏等级
{
    system("cls");
    printf("   **************************************");
    printf("\n\n\n\n\n    请输入数字1-9选择游戏等级，按0返回.     \n\n");
    level=getch();
    level=level-48;
    if (level>0&&level<10)
    {
        printf("    选择等级:%d",level);
            return (level);
    }
    else if(level==0)
        leave();
    else
        printf("Please input a correct number!\n");
}




