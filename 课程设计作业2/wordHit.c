#include "wordHit.h"

int wordHit(char p[yLine][xLine])
//�ж��Ƿ����ַ��Ӽ��̼��롣����У�������һ�е����һ��Ԫ�ؿ�ʼ���������飬�ҳ����ַ������Ѷ�Ӧλ���ÿգ��ҷ���1
//��������룬����Ļ���޶�Ӧ����������򷵻�0 ���������Сд��ĸ����ĻΪ��д�ַ�
{
    int i,j;
    char key;
    if(kbhit())      //�ж��û��Ƿ�Ӽ��̼����ַ������kbhit����ֵΪ
        key=getch();
    if(key)
    {
        if(key=='0')
            leave();
        if(key=='1')
        {
            system("cls");
            printf("�����������������Ϸ.");
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
