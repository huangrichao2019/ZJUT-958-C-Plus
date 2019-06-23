//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/27.
//  Copyright © 2018年 黄日超. All rights reserved.
//  数组存储100!

#include <stdio.h>

/*int main(){
    int a[200];
    int i,j,n,temp,num=1;
    int count = 0;
    
    for(i=1;i<200;i++) a[i] = 0;
    a[0] = 6;
    
    for(j=4;j<=100;j++)
        for(i=0;i<200;i++)
        {
            a[i]*=j;
            if(a[i]>9)
            {
                count++;
                a[i+2] = a[i+2] + a[i]/100;
                a[i+1] = a[i+1] + a[i]/10;
                a[i]%=10;
            }
        }
    printf("100!总共有%d位\n",count);
    printf("100!的结果是:\n");
    for(i=1;i<=count;i++)
        printf("%d",a[count-i]);
    printf("\n");
}
*/
int main()
{
    int arr[200] = {1};
    int count = 1,jin;
    for(int i=2;i<=100;i++)
    {
        for(int j=0; j<count; j++)
        {
            int result = arr[j]*i +jin;
            arr[j] = result%10;
            jin = result / 10;
        }
        while(jin)
        {
            
            arr[count++] = jin % 10;
            jin/=10;
        }
    }
        for(int i=count-1;i>=0;i--)
            printf("%d",arr[i]);
    
    
    
}
