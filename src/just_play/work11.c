//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int g,m,x;
    
    printf("公鸡5元一只，母鸡三元一只，小鸡三只一元，计算一百元买到的一百只鸡里分别有多少只公鸡，多少只母鸡，多少只小鸡：");
    //此时公鸡最多20只，母鸡最多33只，小鸡最多300只
    for(g=0;g<=20;g++)
        for(m=0;m<34;m++)
            for(x=0;x<=300;x++)
            {
                if(100.0==5*g+3*m+3*x/9)
                {
                    printf("公鸡有：%d只 母鸡有%d只 小鸡有%d只\n",g,m,x);
                    
                    break;
                }
            }
    
}

