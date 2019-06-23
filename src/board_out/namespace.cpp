#include <stdlib.h>
#include <iostream>
using namespace std;

namespace A{
    int x=1;
    void func(){
        cout<<"A"<<endl;
    }
}

namespace B{
    int x =2;
    void func(){
        cout<<"B"<<endl;
    }
    void func2(){
        cout<<x<<"B"<<endl;
    }
}

int main(int args,char* argv[]){
     
    cout<<A::x<<endl; 
    B::func2();
    cin.get();
    return 0;
}
