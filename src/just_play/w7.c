//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int num=0;
    int sum=0;
    printf("----welcome---\n");
    while(num!=(-1)){
        
        printf("please input:");
        
        scanf("%d",&num);
        sum +=num;
        printf("current sum=%d,please input new:",sum);    }
    printf("Break!");
    return 0;
}

