//
//  main.cpp
//  test1
//
//  Created by 黄日超 on 2018/5/22.
//  Copyright © 2018年 黄日超. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c,aa,bb,cc;
    void sort(int ,int ,int );
    cout<<"input three numbers and sort them little to large:";
    cin>>a>>b>>c;
    aa=a;bb=b;cc=c;
    sort(aa,bb,cc);
    cout<<a<<" "<<b<<" "<<c<<" in sorted order is: ";
    cout<<aa<<" "<<bb<<" "<<cc<<endl;
    return 0;
}
    void sort(int x,int y,int z)
{
    void change(int ,int );
    if(x>y) change(x,y);
    if(x>z) change(x,z);
    if(y>z) change(y,z);
}
    void change(int l,int n)
{
    int t;
    if(l>n) { l=t;l=n;n=t; }
    
}




