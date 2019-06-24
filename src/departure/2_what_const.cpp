#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){


    int x = 3;
     int y = 5;

    const int* const p = &x;
    

    int* const t = &x;

    // t = &y;t不可变
    x = 10;//x可变

    const int* q = &x;
    // x = 11;x不可变
    q = &y;//q可变

    cout<<"q:"<<*q<<"\nt:"<<t<<"\np:"<<p<<endl; 

    int& s = x;
    s = y;
    y = 1;
    cout<<"\ns:"<<s<<endl;
    cin.get();
    return 0;
}
