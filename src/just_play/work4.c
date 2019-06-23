//
//  main.c
//  test3
//
//  Created by 黄日超  on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//  用 switch 语句 case 1 ... 3 :printf("春");break;

#include <stdio.h>

int main(){
    int mon;
    printf("请输入月份，判断季节：");
    scanf("%d",&mon);
    do{
        if(mon<1 || mon>12)
        {
            printf("月份错误，请重输：");
            scanf("%d",&mon);
        }
        if(mon<4) printf("春天到了,下一个：\n");
        else if(mon<7) printf("夏天到了，下一个：\n");

        else if(mon<10) printf("秋天到了，下一个：\n");
        else printf("冬天到了,下一个：\n");

        scanf("%d",&mon);
        
    }
    while(1);
    
    
}

