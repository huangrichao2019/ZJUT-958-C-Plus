//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int i=1;
    int jc=1;
loop:
    jc *= i;
    i++;
    if(i<11)
        goto loop;
    printf("%d\n",jc);
    
}

