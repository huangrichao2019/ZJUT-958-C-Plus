#include <stdlib.h>
#include <iostream>
using namespace std;


class TV{

    public: 
        char name[20];
        int type;
    private:
        int age;
    public:
        void changeVol();
        void power();
    
};//class 加分号


class Student{
    private: //只读属性
        string m_name;
        string m_gender;
        int m_age;
    public://对外的封装方法
        void setAge(int _age){
            if(_age>0 && _age<100){
                m_age = _age;
            }else{
                cout<<"age范围应该0-100"<<endl;
            }
        }

        int getAge(){
            return m_age;
        }

        void set

    
};//class 加分号

int main(int args,char* argv[]){
     
    //堆对象实例化
    TV *w = new TV();
    TV *t = new TV[20];
    TV *p = new TV[5];

    w->type = 0;
    w->changeVol();

    for (size_t i = 0; i < 20; i++)
    {
        //可以对
        t->type=i;
        cout<<t->type<<endl;
        //C++11后认为t[i]不是指针，所以取消了t[i]->type的写法
        t[i].type=1;
        t[i].changeVol();
    }
    
    delete w;w = NULL;
    delete w;w = NULL;
    delete[] t;t = NULL;


    //栈实例化对象
    TV tv;
    tv.type = 0;
    tv.changeVol();

    cin.get();
    return 0;
}
