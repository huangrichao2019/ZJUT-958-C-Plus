#include <stdlib.h>
#include <iostream>
using namespace std;

void func(int x,int y,int z=0){
    cout<<x<<y+'x'<<z<<endl;
}

int main(int args,char* argv[]){
     
    cout<<"hello\n"<<endl;

    func(1,2);
    cin.get();
    return 0;
}