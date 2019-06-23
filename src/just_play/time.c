//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//  动态电子显示时钟 mm:ss

#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(){
    long t;
    int h,m,s;
    while(1)
    {
        t = time(NULL)%(24*60*60);
        h = (t/(60*60)+8)%24;
        m = t%(60*60)/60;
        s = t%(60);
   
        printf(" 现在的北京时间是%-2d:%-2d:%-2d\r",h,m,s); //送到缓冲区
        fflush(stdout);
        usleep(999000);
        
    }
}

