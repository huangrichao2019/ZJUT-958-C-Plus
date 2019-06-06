#include <stdio.h>

int main(void)
{
    char *ch ;
    *ch = 'a';
    printf("%s\n",ch);
    printf("ch 的地址:%p\n",&ch);   //ch 的地址:0028FF47
    *ch = 'b';
    printf("%s\n",ch);
    printf("ch 的地址:%p\n",&ch);   //ch 的地址:0028FF47
    return 0;
}