//
//  main.c
//  test3
//
//  Created by 黄梦瑶 on 2018/5/6.
//  Copyright © 2018年 黄梦瑶. All rights reserved.
//

#include <stdio.h>

int main(){
    int data;
    int i=3;
    printf("请输入月份查看当月的情人节,最多输错三次：");
    while(i){
    scanf("%d",&data);
    switch(data)
    {
        case 1: printf("1.14日记情人节\n");break;
        case 2: printf("2.14传统情人节\n");break;
        case 3: printf("3.14白色情人节\n");break;
        case 4: printf("4.14黑色情人节\n");break;
        case 5: printf("5.14玫瑰情人节\n");break;
        case 6: printf("6.14亲亲情人节\n");break;
        case 7: printf("7.14银色情人节\n");break;
        case 8: printf("8.14绿色情人节\n");break;
        case 9: printf("9.14相片情人节\n");break;
        case 10:printf("10.14葡萄酒情人节\n");break;
        case 11:printf("11.14电影情人节\n");break;
        case 12:printf("12.14拥抱情人节\n");break;
        default:printf("月份不对，请重新输入：");i--;
    }

}
    return 0;
}
