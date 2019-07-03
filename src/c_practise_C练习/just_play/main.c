//
//  main.c
//  C
//
//  Created by huangrichao on 2018/5/18.
//  Copyright © 2018年 huangrichao. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char buff[255];
    
    fp = fopen("/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff );
    
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );
    
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
    
}
