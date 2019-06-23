#include <stdio.h>

int main(void)
{
    char *ch ;

    printf("%p\n",ch);
    printf("ch 的地址:%p\n",&ch);   //ch 的地址:0028FF47
    printf("%p\n",ch);
    printf("ch 的地址:%p\n",&ch);   //ch 的地址:0028FF47
    return 0;
}