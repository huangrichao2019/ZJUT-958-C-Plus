//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int num=41;
    int man[num];
    int count=0;//自杀人数
    int k=1,i;//报数1开始
   
    for(i=0;i<41;i++)
        man[i] = i+1; //将人的位置赋给人
    while(count<41-2) //count为0时循环1次,剩41-1人,count为38时循环39次,剩41-39人
    {
        for(i=0;i<41;i++)
            if(man[i]!=0) // 将运算对象限制在活着的人的范围里,自动排除已死的人
            {
                if(3==k)
                {
                    man[i]=0;
                    count++; //自杀人数加1
                    k=0; //下一个人报1,所以自杀的地方相当于从0开始报数
                }
                k++;
            }
    }
    for(i=0;i<41;i++)
        if(man[i]!=0) printf("剩下两人的位置分别是%d\n",i+1);
    return 0;
    
}

