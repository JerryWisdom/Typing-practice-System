#include "run.h"

void run()
//��ʼ����������
{
    for (;;)
    {
        sum=0;
        right=0;
        miss=0;
        printf("\n\n    ���������ʼ��Ϸ!");
        m=getch();
        printScreen(level,right,sum,p);
        for(n=0,m=4;;n++)
        {
            Sleep(2);        //�ӳ�
            if(m%4==0)       //����һ����ĸ����3��ʱ������һ���µ���ĸ�����У���ˢ����Ļ
            {
                sum=newWord(sum,p);
                m=5;
                printScreen(level,right,sum,p);
            }
            if(wordHit(p)==true)
            //����û��ö����ַ�����ʹ��Ե�����1����ˢ����Ļ
            {
                right++;
                printScreen(level,right,sum,p);
            }
            if(n==(37-4*level))
            //n���������ٶȣ���Ļ�ϵ���ĸ����һ�У���ˢ����Ļ������ĸ�������һ�У���ʹ�������1
            {
                n=0;
                m++;
                miss=moving(miss,p);
                printScreen(level,right,sum,p);
            }
            if(miss==full||right==full)
            //��û���ö�һ����ĸ��������ʱ ������ѭ��
                break;
        }

        if (result(right)==true&&level<9)
        //���û��ɼ���60���ϣ����ҵȼ�С��9ʱ���ȼ���һ����������һ����
            level++;
    }
}






