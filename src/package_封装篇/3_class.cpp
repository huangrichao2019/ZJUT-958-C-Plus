#include <stdlib.h>
#include <iostream>
#include "Teacher.h"
using namespace std;

int main(int args,char* argv[]){
     
    Teacher t1;
    Teacher t2("Merry",15);

    cout<<t1.getName()<<" "<<t2.getName()<<endl; 
    cin.get();
    return 0;
}
