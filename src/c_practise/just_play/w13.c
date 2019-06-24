//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[4][4] = {{234,34,43,56},{645,645,64,34},{12,645,645,342},{645,412,53,623}};
    int max=~0;
    int max_x,max_y;
    int m=0,n=0,i,j;
    for( i=0;i<4;i++)
        for( j=0;j<4;j++)
            if(a[i][j]>max) max = a[i][j];
    
    for( i=0;i<4;i++)
        for( j=0;j<4;j++)
            if(a[i][j] == max)
            {
                max_x = i; max_y = j;
                printf("最大值是%-4d,它的行坐标是%d,列坐标是%d\n",max,max_x,max_y);
            }
}

