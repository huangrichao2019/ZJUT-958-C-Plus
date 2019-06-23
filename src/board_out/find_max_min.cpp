/*
 * @Author: HuangRichao 
 * @Date: 2019-06-23 23:10:42 
 * @Last Modified by: HuangRichao
 * @Last Modified time: 2019-06-23 23:12:17
 */

#include <stdlib.h>
#include <iostream>
using namespace std;

namespace Compare{
    int getMaxOrMin(int *arr,int count, bool isMax){
        int temp = arr[0];
        for(int i=1; i < count; i++){
            if(isMax && temp < arr[i]){
                temp = arr[i];
            }
            if(!isMax && temp > arr[i]){
                temp = arr[i];
            }
        }
        return temp;
    }
}

int main(int args,char* argv[]){


    int arr1[5] = {3,5,1,7,6};
    bool isMax = false;
    cout<<"是否取最大值：";
    cin>>isMax;
    
    cout<<"是否取最大值："<<boolalpha<<isMax
    <<"\n取数的结果是:"<<Compare::getMaxOrMin(arr1,5,isMax)<<endl; 

    cin.get();
    return 0;
}