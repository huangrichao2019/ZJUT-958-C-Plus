//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//  在8*8数组中布置十个地雷,随机.在不是雷的位置上计算出周边有多少个雷

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    
    int count=0,i,j,r;
    int a[8][8];
    int b[8][8] ;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
            b[i][j]=0;
    
    while(count<10)
    {
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
        {
            a[i][j] = i*8+j;
            r = rand()%64;
            if(r==a[i][j]) {  b[i][j]=9;count++; }
        }
    }
    
                
    
    
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
           /* if(9 == b[i][j])
            {
                b[i-1][j-1]++;b[i-1][j]++;b[i-1][j+1]++;
                b[i][j+1]++;b[i+1][j+1]++;b[i+1][j]++;
                b[i+1][j-1]++;b[i][j-1]++;
                
            }8?
            printf("%2d",b[i][j]);
        printf("\n");
    }
}

