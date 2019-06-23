//
//  main.c
//  test3
//
//  Created by 黄日超 on 2018/5/6.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(){
    char al;
    printf("输入一个字母，大写变小写，小写变大写：");
    scanf("%c",&al);
    
    if(!isalpha(al))
    {
        printf("again：");
        scanf("%c",&al);
    }

    do{
        if(al>=65 && al<=90) al=al+'a'-'A';
       
        else al=al-('a'-'A');
        break;
        
    }while(isalpha(al));
    
    
    printf("%c\n",al);
    
}

