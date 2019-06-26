#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){
     
    //堆数组动态分配的好处是无须知道size，最初只需分配第一个元素的空间即可。
    int* arr = new int[0];
    //不能用正常数组变量初始化的方式给*arr赋值
    //有规律的可以用for循环
    //或者正常初始化一个数组A,把A的首地址赋给arr

 
    cout<<"int* arr = new int[0];arr[0]为"<<arr[0]<<endl; 
    cin.get();
    return 0;
}