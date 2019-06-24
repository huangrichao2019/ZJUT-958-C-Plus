//
//  main.c
//  test3
//
//  Created by 黄日超  on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//

#include <stdio.h>

int main(){
    printf("input score:");
    int score;
    
    /* 循环查看不同成绩的评级 */
    do{
        scanf("%d",&score);
        
        if(score>100 || score<0)
        {
            printf("成绩错误，please input again:");
            scanf("%d",&score);
        }        if(score<60) printf("不合格,请输入下一个成绩：");
        else if(score<70) printf("合格,请输入下一个成绩：");
        else if(score<80) printf("中等,请输入下一个成绩：");
        else if(score<90) printf("良好,请输入下一个成绩：");
        else  printf("优秀,请输入下一个成绩：");
        
        
    }while(1);
}
