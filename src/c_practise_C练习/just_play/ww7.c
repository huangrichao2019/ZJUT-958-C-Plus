//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
// #define DEBUG
int main(){
    int n;
#ifdef DEBUG
     n=4; //调试专用
#endif
    printf("input n:");
    scanf("%d",&n);

    int a[n][n];
    
    int h,l,k=1,i;
    for(h=0;h<n;h++)
        for(l=0;l<n;l++)
            a[h][l] = 0; //用0测试代码效果,结果中的0越少,代码越好
    a[n/2][n/2] = n*n;
    for(i=0;i<n/2;i++)
    {
        for(l=0+i;l<n-1-i;l++)
            a[0+i][l] = k++;
        for(h=0+i;h<n-1-i;h++)
            a[h][n-1-i] = k++;
        for(l=n-1-i;l>0+i;l--)
            a[n-1-i][l] = k++;
        for(h=n-1-i;h>0+i;h--)
            a[h][0+i] = k++;
    }
    
    for(h=0;h<n;h++)
    {
        for(l=0;l<n;l++)
            printf("%3d",a[h][l]);
        printf("\n");
    }
    
    
}

