//
//  main.c
//  求杨辉三角
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int h; //层数
    int i,k,l;
    
    printf("请输入层数：");
    scanf("%d",&h);
    int a[h+1][h+1];
    printf("\n");
    
    //设一个数字占4的字符长度
    for(i=0;i<2*h-2;i++)
        printf(" ");
    printf("1");a[1][1]=1;
    for(i=0;i<2*h-2;i++)
        printf(" "); //第一层输出完毕
    printf("\n");
    
    for(i=0;i<2*h-4;i++)
        printf(" ");
    printf("1   ");a[2][1]=1;
    printf("1   ");a[2][2]=1;
    for(i=0;i<2*h-4;i++)
        printf(" ");  //输出第二层
    printf("\n");
    
    for(i=3;i<=h;i++) // 3至第h层
    {
        for(k=0;k<2*h-2*i;k++) //输出左半段空格符
            printf(" ");
        printf("1   ");a[i][1]=1;
        for(l=2;l<i;l++) //项数
        {
            a[i][l]=a[i-1][l-1]+a[i-1][l];
            printf("%-4d",a[i][l]);
        }
        printf("1   ");a[i][l]=1;
        for(k=0;k<2*h-2*i;k++) //输出右半段空格符
            printf(" ");
        printf("\n");
    }
    
}
            
            
            
            
            
            
