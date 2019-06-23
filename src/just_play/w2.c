//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b,c;  
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a<b&&a>c)||(a>b&&a<c))
        printf("%d",a);
    if((b<a&&b>c)||(b>a&&b<c))
        printf("%d",b);
    if((c<a&&c>b)||(c>a&&c<b))
        printf("%d",c);
    return 0;
}

