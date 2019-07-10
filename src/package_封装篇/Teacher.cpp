#include "Teacher.h" //将.h的代码粘贴过来


//写法与同文件类外定义一模一样
//Teacher::代表后面的代码会被编译器（不是编辑器）指向Teacher类
Teacher::Teacher(){
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
