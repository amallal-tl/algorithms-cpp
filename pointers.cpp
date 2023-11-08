/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int B[2][3] = {{2, 3, 6}, {4, 5, 8}};
    cout << B << endl;
    int* pp = *B;
    cout << pp << endl;
    cout << &(B[0][0]) << endl;
    cout << *(B+1)+2 << endl;
    cout << *(*B+1) << " = " << &B[1][0] << endl;
    
    int* p = (int*) malloc(sizeof(int));
    *p = 10;
    cout << p << " = " << *p << endl;
    free(p);
    p=NULL;
    cout << p << " = " << *p << endl;
    int* p1 = (int*) malloc(2 * sizeof(int));
    *(p1+0) = 10;
    *(p1+1) = 20;
    cout << *(p1+0) << ", " << *(p1+1) << endl;
    free(p);
    
    int* ptr1 = new int(10);
    cout << ptr1 << " = " << *ptr1 << endl;
    
    int* ptr2 = new int;
    *ptr2 = 20;
    cout << ptr2 << " = " << *ptr2 << endl;
    
    int* ptrarr1 = new int[2];
    delete[] ptrarr1;
    
    return 0;
}
