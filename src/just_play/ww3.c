//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
void exch(int a[],int n,int k) //输入数组的首地址,数组长度,分组长度k
{
    int i=0,t,j,temp;
    while(i<n/k) //第i 组
    {
        for(j=0;j<k/2;j++) //一组 k 个
        {
            temp = a[j+i*k];
            a[j+i*k] = a[k-1-j+i*k];
            a[k-1-j+i*k] = temp;
        }
        i++;
    }
   if(n%k)
        for(j=0;j<n%k/2;j++)
            {
            temp=a[n-n%k];
            a[n-n%k] = a[n-1];
            a[n-1] = temp;
            }
}

int main(){
    int a[13] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int k;
    printf("input:"); scanf("%d",&k);
    exch(a,12,k);
    for(int i=0;i<12;i++)
        printf("%-3d",a[i]);
    return 0;
}

