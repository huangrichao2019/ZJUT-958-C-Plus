//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
/*  100=5*2*5*2, 而1到100里有一半的数能拆出2(至少能拆除50多个2),故我们找出1到100能拆出多少个5,把所有的5和2取出来,放到末尾,剩下没取的放前面,则有多少对 5和2 ,100!末尾就有多少个0.
 */

#include <stdio.h>
int main(){
    int i;
    int num=0;
    for(i=2;i<=100;i++)
    {
        if(0 == i%5) num++;
        if(0 == i%25) num++;
    }
    
    printf("%d\n",num);
          }

