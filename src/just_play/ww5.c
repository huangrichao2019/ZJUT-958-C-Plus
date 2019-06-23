//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
int is_run(int y)
{
    
    if(y%100==0 && y%400==0) return 1;
    else if(y%4==0) return 1;
    else return 0;
    
    
}

int main(){
    int y,m,d;
    int t=0;
    printf("请输入年月日,格式yyyy-mm-dd:");
    scanf("%d-%d-%d",&y,&m,&d);
    if(m<=2&&d<=28)
        printf("%4d年%2d月%2d日是%4d年的第%d天",y,m,d,y,(m-1)*31+d);
    else if(is_run(y))
    {
        
loop:
        t=t+31+29;
        switch(m)
        {
            case 3: t=t+31;break;
            case 4: t=t+31+30;break;
            case 5: t=t+31+30+31;break;
            case 6: t=t+31+30+31+30;break;
            case 7: t=t+31+30+31+30+31;break;
            case 8: t=t+31+30+31+30+31+31;break;
            case 9: t=t+31+30+31+30+31+31+30;break;
            case 10: t=t+31+30+31+30+31+31+30+31;break;
            case 11: t=t+31+30+31+30+31+31+30+31+30;break;
            case 12: t=t+31+30+31+30+31+31+30+31+30+31;break;
           
                
        }
        if(m<10)
            printf("%4d年0%d月%2d日是%4d年的第%-4d天\n",y,m,d,y,t);
        else printf("%4d年%2d月%2d日是%4d年的第%-4d天\n",y,m,d,y,t);
        
    }
     else if(0==is_run(y))
        {
        t=-1;
        goto loop;
        }
}

