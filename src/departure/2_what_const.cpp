#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){


    int x = 3;
    int y = 5;

    const int* const p = &x;
    

    int* const t = &x;
    int* g = &x;
    // t = &y;t不可变
    x = 10;//x可变

    const int* q = &x;

    const int* w = g;//指针g赋给指针w，w是x的指针
    int** z = &g;//z是指针g的指针，是x的二重指针，二重指针不可const修饰，**z==&g是g的地址,*z==g是x的地址，**z==x 
    cout<<t<<'\n'<<*w<<'\n'<<z<<'\n'<<*z<<'\n'<<**z<<endl;

    // x = 11;x不可变
    q = &y;//q可变
    // *q = 11不允许

    cout<<"q:"<<*q<<"\nt:"<<t<<"\np:"<<p<<endl; 

    int& s = x;
    s = y;
    y = 1;
    cout<<"\ns:"<<s<<endl;
    cin.get();
    return 0;
}
