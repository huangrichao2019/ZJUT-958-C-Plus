//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超 . All rights reserved.
//

#include <stdio.h>

int main(){
    int min,mid,max,a,b,t;
    printf("输入三个整数并排列:");
    scanf("%d %d %d",&min,&mid,&max);
    a=min;
    b=mid;
    t=max;
   
    max=(mid>min?mid:min); //寻找最大数
    max=(t>max?t:max);
    
    min=(min<mid?min:mid); //寻找最小数
    min=(t<min?t:min);
    
    if((a!=min)&&(a!=max)) mid=a;  //寻找中间数
    else if((b!=min)&&(b!=max)) mid=b;
    else mid = t;
    printf("%d %d %d\n",min,mid,max);
}

