#include "result.h"

int result(int right)
//�жϸôεĳɼ��������Ӧ�Ľ����ѯ���û��Ƿ���������������ж��Ƿ���Խ�����һ����
{
    int score;
    char yn;
    score=right*100/full;      //�ö�һ����5��
    system("cls");
    if(score==100)
        printf("\n\n\n\n\n\n\n\n\n\t ��ĵ÷֣�%d\n\t ̫���ˣ���ϲ�����֣�\n",score);
    else if(score>=85)
        printf("\n\n\n\n\n\n\n\n\n\t ��ĵ÷֣�%d\n \t �ܺã�����Ŭ��Ŷ!\n",score);
    else if(score>=70)
        printf("\n\n\n\n\n\n\n\n\n\t ��ĵ÷֣�%d\n\t ��Ĵ���Ч��һ��Ŷ!\n",score);
    else
        printf("\n\n\n\n\n\n\n\n\n��ĵ÷֣�%d\n\t����ܵü��Ϳ�!\n",score);
    printf("\n\n          ���ʣ��㻹�������\n\n          ������Y\n          ������N\n");
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
                printf("\n\n\n\n\n\n\n\n\n\n     ������һ����ȷ��ѡ��:");
        }
    }
}




