#include "start.h"

int start()
//�������ʱ���øú�������ʾ�����
{
    char c;
    while(true)
    {
        system("cls");
        printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("\t\t\t* * * * * * * * * * * * �� �� �� ϰ ϵ ͳ * * * * * * * * * * *\n");
        printf("\t\t\t* * * * * * * * * * * * * �� �� �� �� �� * * * * * * * * * * * * \n");
        printf("\t\t\t* * * * * * * �� Ա �� �� �� �� �� �� � �� �� �� �� * * * * * * \n");
        printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf ("\n\n\n          ��ӭ���� ��ϰ����ϵͳ\n\n          1.��ʼ\n\n          2.��Ϸ��֪\n\n          0.�˳�\n\n");
        printf("\t  ������ָ�");
        c=getch();
        switch(c)
        {
            case '0':
                leave();

            case '2':
            {
                system("cls");
                printf("\n\n\n\n\n          ���������Ļ�Ͽ�������ĸ.\n          ��0�˳�.\n          ��1��ͣ\n          ��2.��ʼ\n");
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



