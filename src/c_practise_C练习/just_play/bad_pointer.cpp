/*
 * @Author: HuangRichao 
 * @Date: 2019-06-23 09:01:39 
 * @Last Modified by:   HuangRichao 
 * @Last Modified time: 2019-06-23 09:01:39 
 */

#include <cstdio>


void opp()
{
     int* p = NULL;
     *p = 10;      //Oops! 不能对NULL解地址
     printf("%d",*p);
}

void foo()
{
     int* p;
     *p = 10;      //Oops! 不能对一个未知的地址解地址
}

void bar()
{
     int* p = (int*)1000; 
     *p =10;      //Oops!   不能对一个可能不属于本程序的内存的地址的指针解地址
}

int main(){
     // opp();
     // foo();
     int i = 10;
     int* p = &i;
     bar();
     return 0;
}
