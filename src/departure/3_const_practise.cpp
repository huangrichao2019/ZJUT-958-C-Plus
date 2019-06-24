#include <stdlib.h>
#include <iostream>
using namespace std;

void func(const int& a,const int& b){
    // a = 10; 报错 因为a不可变
    // b = 20; 报错 因为b不可变
    cout<<a+b<<endl;
}

int main(int args,char* argv[]){
     
    int x = 3;
    int y = 5;

    const int a =3;
    const int& b= a;//const只能被赋值给const，常亮只能被赋值给常亮
    func(x,y);
    
    const int& z = x;
    //z = 
    const int* p = &x;//*p不可变，即不可被赋值，p可以被复制
    // *p = 5;报错
    p = &y;

    int* const q = &x;//q不可变，即不可被复制，*q可以被赋值
    // q =&y;报错
    *q = 10;
s
    x = 5;
    cout<<"hello"<<endl; 
    cin.get();
    return 0;
}
