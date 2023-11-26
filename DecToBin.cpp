// C++ program to check if 5 is equal to 0101
#include <iostream>
using namespace std;

int main()
{
    int dec = 5; // decimal number
    int bin = 0b0101; // binary number, prefixed with 0b
    int result = dec ^ bin; // bitwise XOR operation
    if (result == 0) // if the result is 0, the numbers are equal
    {
        cout << "5 is equal to 0101" << endl;
    }
    else // otherwise, the numbers are not equal
    {
        cout << "5 is not equal to 0101" << endl;
    }
    return 0;
}
