//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int passwd = 132456;
    int guess;
    int count=3;
    printf("您有3次机会输入6位正确的密码!请输入:");
    scanf("%d",&guess);
    while(guess!=passwd)
    {
        count--;
        if(0 == count) { printf("账号被锁,请联系管理员!\n");break; }
        printf("您还有%d 次机会输入密码!请输入:", count);
        scanf("%d",&guess);
        
    }
    if(guess == passwd ) printf("恭喜你,密码正确!\n");
}

