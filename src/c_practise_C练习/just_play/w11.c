//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//
    
#include <stdio.h>
    
    int main(){
        int a[10]={},arr[10]={};
        int t,i=0,num;
        printf("please input a integer number:");
        scanf("%d",&num);
        while(num)
        {
            a[i] = num%10;
            arr[a[i]]++;
            num /= 10;
            i++;
            
        }
       
        printf("reward is ");
        for(i--;i>=0;i--)
            printf(" %-4d",a[i]);
        printf("\n");
        for(i=0;i<10;i++)
            printf("%d出现了%d次\n",i,arr[i]);
}

