#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){

    //申请内存
    int* p = new int;
    if(NULL == p){
        cout<<"申请内存失败"<<endl;
    }
    //如果申请成功，则将*p赋值20，打印，回收，清空
    else{
        *p = 20;
        cout<<"p:"<<*p<<endl;
        delete p;//内存回收了，p就是野指针，得及时清空,变成空指针。
        p = NULL;
    }
    int arr[] = {10,20};


    int* array = new int[10];
    if(NULL == array){
        cout<<"申请内存失败"<<endl;
    }
    else{
        array[0] = 1;
        array[1] = 2;
        cout<<"array:"<<*array<<endl;
        delete[] array;//arr指向arr[0],所以delete arr只会回收数组的第一个元素，不符合要求，
                       //必须写成delete[] arr的形式
        array = NULL;
    }
    
    



    cout<<"hello"<<endl; 
    cin.get();
    return 0;
}