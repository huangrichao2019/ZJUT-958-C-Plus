//
//  main.c
//  work9
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int l,r,i,n;
    for(i=1;i<=5;i++) //菱形上半部分
        {
            for(l=0;l<5-i;l++) printf(" ");
            for(n=0;n<2*i-1;n++) printf("*");
            for(r=0;r<5-i;r++) printf(" ");
            printf("\n");
            
        }
    for(i=4;i>=1;i--) //棱形下半部分
    {
        for(l=0;l<5-i;l++) printf(" ");
        for(n=0;n<2*i-1;n++) printf("*");
        for(r=0;r<5-i;r++) printf(" ");
        printf("\n");
        
    }
}

