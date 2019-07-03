#include <cstdio>

int main(void)
{
    int age = 19;
    int* p_age = &age;//取地址
    *p_age  = 20;  //通过指针修改指向的内存数据

    printf("age = %d\n",*p_age);   //解地址，通过指针读取指向的内存数据
    printf("age = %d\n",age);
    printf("指针*p_age的地址是 %p\n",p_age);

    return 0;
}