//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//5红球[1,33] 1篮球[1,16]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randtime()
{
    int t;
    srand(time(NULL));
    t=rand();
    return t;
}

int main(){
    int red[5],blue;
    int t,i=4,count;
    srand(time(NULL));
    while(count<5)
   {
       
       int val = rand()%33+1;
       for(i=0;i<count;i++)
       {
           if(val == red[i]) break;
       }
       if(i == count ) red[count++] = val;
       
       
   }
    printf("机选号码是:%3d%3d%3d%3d%3d +%2d\n",red[0],red[1],red[2],red[3],red[4],blue);

}
