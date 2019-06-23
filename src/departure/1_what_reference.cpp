#include <stdlib.h>
#include <iostream>
using namespace std;


//定义一个节点（结构体）
typedef struct{
    int x;
    int y;
}Coor;

int main(int args,char* argv[]){

    int a = 3;
    Coor c1;
    int *p = &a;

    //变量的引用
    int &b = a;
    //结构体的引用
    Coor &c = c1;
    //指针的引用,此时p作为一个内存空间名出现，不是作为地址，故不带*
    int *&q = p;
    
    
    c.x=10;
    c.y=20; 
    b = 10;
    cout<<"变量引用后:"<<a<<endl;
    *q = 18;


    cout<<"指针引用后:"<<a<<endl; 
    cout<<"c1.x："<<c1.x<<"\nc1.y: "<<c1.y<<endl;
    cin.get();
    return 0;
}