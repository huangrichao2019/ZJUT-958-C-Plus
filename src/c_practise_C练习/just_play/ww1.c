//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/27.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int strength(int num)
{
    int i=0;
    while(num)
    {
        num/=10; i++;
    }
    return i;
}

int ishw(int num)
{
    int i=0;
    int s = strength(num);
    int a[s];
    int flag=0;
    while(num)
    {
        a[i] = num%10;
        i++;
        num/=10;
    }
    for(i=0;i<s;i++)
        if(a[i]!=a[s-1-i])
        {
            flag++; //计数器 非0计数器思想会更简单
            break;
        }
    if(flag) return 0;
    else return 1;
}

int main(){
    int num;
    printf("input:");   scanf("%d",&num);
    
    if(ishw(num)) printf("%4d是回文\n",num);
    
    else printf("%4d不是回文\n",num);
    
    return 0;

}

