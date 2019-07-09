#include <stdlib.h>
#include <iostream>
#include "Teacher.h"
using namespace std;

//纯粹对.h文件里的方法的实现
//Teacher::代表后面的代码会被编译器（不是编辑器）塞进Teacher.h里
Teacher::Teacher(){
    //可以看到m_strName是凭空出现的，说明编译器编译时会将.cpp里的代码替换到.h里
    //不这样想无法解释m_strName是哪里来的
    m_strName = "Jim";
    m_intAge = 5;
    cout<<"Teacher()"<<endl;
}

Teacher::Teacher(string name,int age){
    m_strName = name;
    m_intAge = age; 
    cout<<"Teacher(string name,int age)"<<endl;
}


//void必须在前面，.h不需要重复类型声明
void Teacher::setName(string name){
    m_strName = name;
}

string Teacher::getName(){
    return m_strName;
}

void Teacher::setAge(int age){
    m_intAge = age;
}

int Teacher::getAge(){
    return m_intAge;
}
