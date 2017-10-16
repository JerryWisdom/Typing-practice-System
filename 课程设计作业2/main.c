#include "valueSet.h"
#include "newWord.h"
#include "leave.h"
#include "levelChoice.h"
#include "moving.h"
#include "printScreen.h"
#include "result.h"
#include "start.h"
#include "wordHit.h"
#include "run.h"

int main()
{
    srand(time(NULL));
    start();
    level=levelChoice(level);
    for(i=0;i<yLine;i++)      //屏幕初始化
    {
        for(j=0;j<xLine;j++){
            if(j==0||j==xLine-1)
                p[i][j]=20;
            else
                p[i][j]=' ';
        }
    }
    run();
    return 0;
}





