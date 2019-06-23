//
//  main.cpp
//  test1
//
//  Created by 黄日超 on 2018/5/22.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str[5];

    cout<<"input five strings :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"input str["<<i<<"] : ";
        cin>>str[i];
        
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
            if(str[j]>=str[j+1])
               {
               string t=str[j];
               str[j]=str[j+1];
                   str[j+1]=t;
               }
        
    }
    
    for(int k=0;k<5;k++)
        cout<<str[k]<<endl;
}
