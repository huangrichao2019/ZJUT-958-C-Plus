#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Teacher{

public:
    Teacher();
    Teacher(string name,int age);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
private:
    string m_strName;
    int m_intAge;

};
