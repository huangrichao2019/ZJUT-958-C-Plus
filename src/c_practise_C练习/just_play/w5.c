//
//  main.c
//  90度逆时针旋转数组a[4][4]
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[4][4],b[4][4];
    int i,j;
    printf("请输入数组a[4][4]:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            b[3-j][i]=a[i][j];
        }
    printf("原数组a是：\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
    
    printf("\n选择后组b是：\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%6d",b[i][j]);
        printf("\n");
    }
}

