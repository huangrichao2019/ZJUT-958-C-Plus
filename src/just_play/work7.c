//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
void _max_min(int x,int y) //将大的赋给x，小的赋给y
{
    int t;
    t = x;
    if(x<y) {x = y;y = t;}
    else x = t;
    
}

int zdgys(int x,int y) //形参x,y 求x与y的最大公约数
{
    int t;
    _max_min(x,y);
    while(1)
    {
        t=x%y;
        if(x%t==0 && y%t==0) break;
        else { x=y ; y=t; }
        
    }
    return t;
}

int zxgbs(int x,int y) //形参x,y 求x与y的最小公倍数
{
    int t,i;
    _max_min(x,y);
    while(1)
    {
        for(i=2;i<y;i++)
            if(y*i%x==0) { t=y*i ; break;}
        
        return t;
        
    }
    
}


int main(){
    int m,n;
    printf("输入两个数，输出最大公约数与最小公倍数:");
    do{
        scanf("%d%d",&m,&n);
        printf("%d与%d的最大公约数是%d,最小公倍数是%d,请输入下一轮：\n",m,n,zdgys(m,n),zxgbs(m,n));
    }while(1);
    
}

