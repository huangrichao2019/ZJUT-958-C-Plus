#include <stdlib.h>
#include <iostream>
using namespace std;


//定义一个节点（结构体）
typedef struct{
    int x;
    int y;
}Coor;

void swap(int &a,int &b){
    int c = 0;
    c = a;
    a = b;
    b = c;
}

int main(int args,char* argv[]){

    int a = 3;
    Coor c1;
    int *p = &a;

    //变量的引用
    int &b = a;
    //结构体的引用
    Coor &c = c1;
    //指针的引用,p是指针，p是a的地址，*p是a。q从p那引用了a的地址，*q是a
    int* &q = p;
    
    
    c.x=10;
    c.y=20; 
    b = 10;
    cout<<"变量引用后a:"<<a<<endl;
    *q = 18;


    cout<<"指针引用后a:"<<a<<endl; 
    a = 30;
    cout<<"变量改变后b:"<<b<<endl;
    cout<<"c1.x："<<c1.x<<"\nc1.y: "<<c1.y<<endl;

    swap(c1.x,c1.y);
    cout<<"交换后\n"<<"c1.x："<<c1.x<<"\nc1.y: "<<c1.y<<endl;
    cin.get();
    return 0;
}