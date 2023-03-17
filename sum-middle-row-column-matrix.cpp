// C++ program to find sum of
// middle row and column in matrix
#include <iostream>
using namespace std;
const int MAX = 100;

void middlesum(int mat[][MAX], int n)
{

	int row_sum = 0, col_sum = 0;
	
	//loop for sum of row
	for (int i = 0; i < n; i++)
		row_sum += mat[n / 2][i];
	
	cout << "Sum of middle row = "
					<< row_sum<<endl;
	
	//loop for sum of column
	for (int i = 0; i < n; i++)
		col_sum += mat[i][n / 2];
	
	cout << "Sum of middle column = "
							<< col_sum;
}

// Driver function
int main()
{
	int mat[][MAX] = {{2, 5, 7},
					{3, 7, 2},
					{5, 6, 9}};
	
	middlesum(mat, 3);
	
	return 0;
}
