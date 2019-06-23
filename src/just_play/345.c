//
//  main.c
//  test3
//
//  Created by 黄梦瑶 on 2018/5/6.
//  Copyright © 2018年 黄梦瑶. All rights reserved.
//

#include <stdio.h>

int main(){
	int year;
	printf("输入一个年份，判断是否是闰年：");
	scanf("%d",&year);
	
    if(year%4==0 && (year/100!=0 && year%400==0))
         printf("%d是闰年",year);
	else printf("%d不是闰年",year);
}

