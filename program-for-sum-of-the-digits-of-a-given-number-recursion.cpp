// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check sum of digit using tail recursion
int sum_of_digit(int n, int val)
{
	if (n < 10) {
		val = val + n;
		return val;
	}
	return sum_of_digit(n / 10, (n % 10) + val);
}

// Driver code
int main()
{
	int num = 12345;

	// Function call
	int result = sum_of_digit(num, 0);
	cout << "Sum of digits is " << result;
	return 0;
}
