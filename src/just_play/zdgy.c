//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

void _max_min(int x,int y)
{
    int temp;
    if(x<y){ temp=x; x=y; y=temp; }
}

int zdgys(int x,int y)
{
    int t;
    _max_min(x,y);
    t=x%y;
    while(1)
    {
        if(0==x%t&&0==y%t) break;
        else x=y;y%=t;
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
void out(int a,int b,int __func)
{
    if(0==__func) printf("%d\n",zdgys(a,b));
    else if(1==__func) printf("%d\n",zxgbs(a,b));
    else printf("Error function!");
}
    
int main(){
    int a,b,func;
    while(1){
        printf("please input:");
        scanf("%d%d%d",&a,&b,&func);
        out(a,b,func);
    }
    return 0;

}

