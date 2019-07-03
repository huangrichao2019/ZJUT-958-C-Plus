//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[10];
    int i=0,num;
    printf("please input a integer number:");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        a[i] = num%10;
        num /= 10;
    }
    printf("now,get it reward:");
    for(i=0;i<10;i++)
    {
        if(a[i]>0 && a[i]<=9) printf("%d",a[i]);
        
    }
    printf("\n");
    return 0;
}

