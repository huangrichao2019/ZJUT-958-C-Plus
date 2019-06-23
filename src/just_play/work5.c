//
//  main.c
//  test3
//
//  Created by 黄日超  on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//

#include <stdio.h>

int main(){
    int num,t,k,i=0;
    int flag,n=0,sum=0;
    printf("判断一个数是否神奇数：");
    while(1)
    {
        flag = 0;
        scanf("%d",&num);
        t=num;
        for(i=0;i<32;i++)
    {
            k = num;
        
            if(k&0x00000001) flag++;
            k=k>>1;
    }
    
        for(i=0;i<11;i++)
    {
            t/=10;
            n++;
            if(t==0) break;
    }
        for(i=0;i<n;i++)
    {
            sum=t%10;
            t%=10;
    
    }

        if(sum == flag)  printf("%d是神奇数,下一个：\n",num);
        else printf("%d不是神奇数，下一个：\n",num);
    }
}

