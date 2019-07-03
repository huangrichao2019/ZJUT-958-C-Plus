#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(int args,char* argv[]){

    string name; //初始化为" ";
    cout<<name<<"name.empty?"<<boolalpha<<name.empty()<<endl;
    name = "ZhangSan";

    string hobby("football");
    string hobby2(hobby);//深拷贝,相互独立，仅内容一样,等价于sring hobby2=hobby
    string hobby3(5,'m');//hobby3 =mmmmmm' 连续5个m

    hobby = "foot";
    hobby2 = hobby+"ball";
    cout<<"hobby2:"<<hobby2<<" hobby2.size:"<<hobby2.size()<<endl;
    cout<<"hobby:"<<hobby<<" hobby[2]"<<hobby[2]<<endl;
    cout<<"hobby3==hobby?"<<boolalpha<<(hobby3==hobby)<<endl;//输出语句中的表达式一律需要加括号

    cin.get();
    return 0;
}
