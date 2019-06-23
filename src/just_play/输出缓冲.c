//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
int main(){
    printf("正在缓冲...\n");
    while(1)
    {
    printf("+++++"); //满4k才显示到屏幕
    usleep(10000);
    }
}

