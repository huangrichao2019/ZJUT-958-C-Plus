//
//  main.c
//  test3
//
//  Created by 黄日超  on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//

#include <stdio.h>

int isprime(int num){
    int flag=0,i;
    for(i=2;i<num;i++)
        if(num%i==0) flag++;
    
    if(!flag) return 1;
    else  return 0;
}

int main(){
    int num;
    printf("输入一个整数判断是否素数：");
    
    do{
        scanf("%d",&num);
        if(isprime(num)) printf("%d是素数,下一个：\n",num);
        else printf("%d不是素数，下一个：\n",num);
    }while(1);
    
}

