#include "levelChoice.h"

int levelChoice(int level)
//������Ϸʱѡ����Ϸ�ȼ�
{
    system("cls");
    printf("   **************************************");
    printf("\n\n\n\n\n    ����������1-9ѡ����Ϸ�ȼ�����0����.     \n\n");
    level=getch();
    level=level-48;
    if (level>0&&level<10)
    {
        printf("    ѡ��ȼ�:%d",level);
            return (level);
    }
    else if(level==0)
        leave();
    else
        printf("Please input a correct number!\n");
}




