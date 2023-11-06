/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* p = &a;
    cout<<"p = " << p << endl;
    cout<<"a = " << *p << endl;
    int b = 20;
    *p = b;
    cout<<"p = " << p << endl;
    cout<<"a = " << *p << endl;
    cout<<"p++ = " << p+1 << endl;
    *p = *(p)+1;
    cout<<"*p+1 = " << *p  << endl;
    *p = *(p)+1;
    cout<<"*p+1 = " << *p << endl;
    return 0;
}
