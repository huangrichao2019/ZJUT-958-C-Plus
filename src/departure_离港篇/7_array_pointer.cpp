#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){
     
    //堆数组动态分配的好处是无须知道size，最初只需分配第一个元素的空间即可。
    //用指针的好处是通过指针即可以知道它本身的内存空间，又可以知道它所指向的内存空间

    int* arr = new int[10];
    cout<<*arr<<'\n'<<arr<<'\n'<<arr[9]<<endl;
  
    
    //不能用正常数组变量初始化的方式给*arr赋值，原因如下
    //int* arr = {0,1,2,3}是错误的写法，因为arr是一个地址，类型是int，而不是int[]型数组。
    //arr[0]表示arr指针向后位移0个位置的内存里的元素

    //从堆内分配一个数组空间
    //有规律的可以用for循环
    //或者正常初始化一个数组xxx,把A的首地址赋给arr
    int* arr1 = new int;
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = i+1;//直接向内存的具体地址送数
    }
    cout<<*arr<<'\n'<<arr<<'\n'<<arr[9]<<endl;
    

    cout<<"int* arr = new int[0];arr[0]为"<<arr[0]<<endl;
    cout<<"int* arr1 = new int;arr为"<<arr1[0]<<endl;

    int* p = arr;//创建一个指针指向数组指针
    cout<<"p:"<<p<<'\n'<<"*p:"<<*p<<endl;
    *p = 1;//给未知内存地址赋值1，运行报错，但编译器不一定报错，因为C++语法允许这样写，计算机内部也能处理。但运行时计算机不能凭空造数值，所以运行时会报错
    

    int* &b = p; //创建指针p的别名b，b就是p，*b就是*p
    *b =20;
    cout<<"b:"<<b<<'\n'<<"*p:"<<*p<<endl;

    int* q = new int;//创建一个指针指向常数0，动态分配内存地址
    int* t = new int(0);//创建一个指针指向常数0，动态分配内存地址
    int* w = new int[0];//创建一个size为1的int数组指针指向一个内容为[0,]的数组，，动态分配地址
    cout<<"q:"<<q<<'\n'<<"*q:"<<*q<<endl;
    cout<<"t:"<<t<<'\n'<<"*t:"<<*t<<endl;
    cout<<"w:"<<w<<'\n'<<"*w:"<<*w<<endl; 
    cin.get();
    return 0;
}