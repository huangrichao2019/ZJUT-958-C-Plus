#include <stdlib.h>
#include <iostream>
using namespace std;

void func(int x,int y,int z=0){
    cout<<x<<'\n'<<' '+y<<'\n'<<z<<endl;
}

int main(int args,char* argv[]){
     
    cout<<"hello\n"<<endl;

    func(1,0);
    cin.get();
    return 0;
}



