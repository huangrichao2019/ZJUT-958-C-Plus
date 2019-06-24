//
//  main.c
//  test3
//
//  Created by 黄日超  on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//

#include <stdio.h>

int main()
{
    int j,k,l,i;
    for(i=1;i<10;i++) //乘数
    {
        for(j=1;j<=i;j++) //被乘数
            printf("%d*%d=%-4d",j,i,j*i); //被乘数*乘数=j*i %-4d 左顶格，长度为4
        
    
        printf("\n");

    }
}
