#include <stdlib.h>
#include <iostream>
using namespace std;

namespace myNum{
    int x =105;
}

int main(int args,char* argv[]){
     
    bool isFlag = false;

    if(myNum::x%2 > 0){
        isFlag = true;
    }

    if(isFlag){
        cout<<myNum::x<<"是奇数"<<endl;
    }

    cin.get();
    return 0;
}   