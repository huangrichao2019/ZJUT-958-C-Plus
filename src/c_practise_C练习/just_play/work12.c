//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[10] ;
    int i,j,k;
    a[0]=1;a[1]=1;
    for(i=2;i<10;i++)
    {
        a[i]=(a[i-1]+a[i-2]);
    }
    for(i=0;i<10;i++)
        printf("%-4d",a[i]);
}

