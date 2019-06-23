//
//  main.c
//  test3
//
//  Created by 黄梦瑶 on 2018/5/6.
//  Copyright © 2018年 黄梦瑶. All rights reserved.
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



