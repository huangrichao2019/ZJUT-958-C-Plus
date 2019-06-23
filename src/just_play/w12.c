//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int n,i,j,temp,num;
    printf("plese input n:");
    scanf("%d",&n);
    
    int arr[n];

for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        arr[i] = num;
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
           if(arr[i]>arr[j])
           {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
    
    for(i=0;i<n;i++)
        printf("%-4d",arr[i]);
}

