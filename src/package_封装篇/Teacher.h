#include <string>
#include <iostream>
using namespace std;

class Teacher{
//类内定义的函数，默认inline
public:
    Teacher();
    Teacher(string name,int age);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    void printDoubleAge();
private:
    string m_strName;
    int m_intAge;
};

void Teacher::printDoubleAge(){
    cout<<2*m_intAge<<endl;
}

