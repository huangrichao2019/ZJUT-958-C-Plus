//
//  main.c
//  test3
//
//  Created by huangrichao on 2018/5/6.
//  Copyright © 2018年 huangrichao. All rights reserved.
//

#include <stdio.h>

int main(){
    int i,j,k;

    for(k=0;k<5;k++){
        for(i=0;i<4-k;i++) printf(" ");
        for(j=0;j<5;j++){
            printf("*");
            if(j==4) printf("\n");
         }
    
    }

    }



