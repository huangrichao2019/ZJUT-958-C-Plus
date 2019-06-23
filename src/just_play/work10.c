//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int i,l,m,r;

    printf("     *    \n");
    for(i=2;i<6;i++) //棱形上半部分
    {
        for(l=0;l<6-i;l++) printf(" ");
        printf("*");
        for(m=0;m<2*i-3;m++) printf(" "); //第i层的中间空格数是2*(i-1)-1
        printf("*");
        for(r=0;r<6-i;r++) printf(" ");
        printf("\n");
    }
    
    for(i=4;i>1;i--) //对应上半部分，设计下半部分
    {
        for(l=0;l<6-i;l++) printf(" ");
        printf("*");
        for(m=0;m<2*i-3;m++) printf(" "); //第i层的中间空格数是2*(i-1)-1
        printf("*");
        for(r=0;r<6-i;r++) printf(" ");
        printf("\n");
    }
    printf("     *    \n");
    
}

