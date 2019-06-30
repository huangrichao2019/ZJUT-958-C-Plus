#include <stdlib.h>
#include <iostream>
using namespace std;


class TV{

    public: 
        char name[20];
        int type;
    private:
        int age;
    public:
        void changeVol();
        void power();

    
};//class 加分号

int main(int args,char* argv[]){
     
    
    int* p;//创建一个指针指向常数1
    *p = 1;//运行报错，但编译器不一定报错，因为C++语法允许这样写，计算机内部也能处理。但运行时计算机不能凭空造数值，所以运行时会报错
    cout<<"p:"<<p<<'\n'<<"*p:"<<*p<<endl;

    int* &b = p; //创建指针p的别名b，b就是p，*b就是*p
    *b =20;
    cout<<"b:"<<b<<'\n'<<"*p:"<<*p<<endl;

    int* q = new int;//创建一个指针指向常数0，动态分配内存地址
    int* t = new int(0);//创建一个指针指向常数0，动态分配内存地址
    int* w = new int[0];//创建一个size为1的int数组指针指向一个内容为[0,]的数组，，动态分配地址
    cout<<"q:"<<q<<'\n'<<"*q:"<<*q<<endl;
    cout<<"t:"<<t<<'\n'<<"*t:"<<*t<<endl;
    cout<<"w:"<<w<<'\n'<<"*w:"<<*w<<endl;

    delete[] w;
    w = NULL;

    cin.get();
    return 0;
}
