/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.youtube.com/watch?v=zuegQmMdy8M

*******************************************************************************/

#include <iostream>

using namespace std;

int sumOfElements(int* arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /*int a = 10;
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
    */
    int arr[4] = {4, 3, 2, 1};
    //cout << "Arr[0] = " << *arr << endl;
    //cout << "Arr[1] = " << *(arr+1) << endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum = " << sumOfElements(arr, size) << endl;
    return 0;
}
