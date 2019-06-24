//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int num;
    int i=10;
    scanf("%d",&num);
    while(num)
    {
        printf("%d",num%10);
        num/=10;
        
    }
    printf("\n");
}

