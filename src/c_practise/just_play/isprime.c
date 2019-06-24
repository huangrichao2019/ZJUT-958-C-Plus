//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int isprime(int num)
{
    int i,flag=0;
    for(i=2;i<=num/2;i++)
        if(0==num%i) flag++;
    if(flag) return 0; //flag大于0,不是素数
    else return 1;
}

int main(){
    int num;
    for(num=2;num<=1000;num++)
        if(isprime(num))
    printf("%-4d",num);
}

