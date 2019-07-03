#include <stdlib.h>
#include <iostream>
using namespace std;


//重载一
int getMax(int x,int y,int z){
    if(z>=x&&z>=y){
        return z;
    }
    else if(x>=z&&x>=y){
        return x;
    }
    else{
        return y;
    }
}

//重载二
double getMax(double x,double y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    } 
}

int main(int args,char* argv[]){
     
    double tmp = getMax(1.0,2.0); //由计算机决定用哪个函数合适
    cout<<tmp<<endl; 
    cin.get();
    return 0;
}