//
//  main.c
//  test3
//
//  Created by 黄梦瑶 on 2018/5/6.
//  Copyright © 2018年 黄梦瑶. All rights reserved.
//

#include <stdio.h>

int main(){
   
	int num,flag=0,b,s,g;
	printf("输入一个三位数，是否时水仙花数\n");
	scanf("%d",&num);
	b = num/100;
	s = (num/10)%10;
	g = num%10;
	
	if(b*b*b+s*s*s+g*g*g==num) flag++;


	if(flag) printf("%d=%d^3+%d^3+%d^3是水仙花数",num,b,s,g);
	else printf("%d不是水仙花数",num);
}

