#include "start.h"

int start()
//进入程序时调用该函数，提示其操作
{
    char c;
    while(true)
    {
        system("cls");
        printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("\t\t\t* * * * * * * * * * * * 打 字 练 习 系 统 * * * * * * * * * * *\n");
        printf("\t\t\t* * * * * * * * * * * * * 组 长 ： 杨 可 * * * * * * * * * * * * \n");
        printf("\t\t\t* * * * * * * 组 员 ： 饶 智 、 徐 建 淼 、 蓝 凯 豪 * * * * * * \n");
        printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf ("\n\n\n          欢迎来到 练习打字系统\n\n          1.开始\n\n          2.游戏须知\n\n          0.退出\n\n");
        printf("\t  请输入指令：");
        c=getch();
        switch(c)
        {
            case '0':
                leave();

            case '2':
            {
                system("cls");
                printf("\n\n\n\n\n          打击你在屏幕上看到的字母.\n          按0退出.\n          按1暂停\n          按2.开始\n");
                while (true)
                {
                    c=getch();
                    if (c=='0')
                        leave();
                    if (c=='2')
                        return (true);
                }
            }
            case '1':
                return (true);
        }
    }

}



