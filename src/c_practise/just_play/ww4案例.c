//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n=41,x=3;
    printf("41人围成圈,报到3者自杀\n");

    int p[n];
    for(i=0;i<n;i++)
        p[i]=i+1;
    
    int k=1; //k 从1开始报
    int m=0; //当前自杀人数
    
    while(m<n-2) //当 m==0时执行1次循环,自杀1人,故 m==38时执行了39次循环,此时自杀39人,刚好只剩2人.
        for(i=0;i<n;i++)
        {
            if(*(p+i)!=0)  //使后续语句面向p[i]为1的对象,即用 if 语句巧妙地将运算对象锁定在活着的人里,巧妙地排除了已死的人
            {
                if(k==x) // x是3 ,当 k自加到3
                {
                    *(p+i)=0;//将退出的人标记为0
                    m++;//退出人数加1
                    k=0; //下一个人从1开始报,所以人死的位置可以看成0
                }
                k++; //隐含了else(k!=3)这个条件
            }
        }
    // *(p+i)=k;//循环一轮,指向第一个(可有可无)
    for(i=0;i<n;i++)//找出地址非0的那个指针即所找的那个编号
        if(*(p+i)!=0)
            printf("最后两人的编号分别是:%d\n",i+1);
    
    return 0;
    free(p);//归还 清除内存；
}

