// C++ program to traverse the matrix recursively

#include <iostream>
using namespace std;

#define N 2
#define M 3

// Function to traverse the matrix recursively
int traverseMatrix(int arr[N][M], int current_row,
				int current_col)
{
	// If the entire column is traversed
	if (current_col >= M)
		return 0;

	// If the entire row is traversed
	if (current_row >= N)
		return 1;

	// Print the value of the current
	// cell of the matrix
	cout << arr[current_row][current_col] << ", ";

	// Recursive call to traverse the matrix
	// in the Horizontal direction
	if (traverseMatrix(arr, current_row,
					current_col + 1)
		== 1)
		return 1;

	// Recursive call for changing the
	// Row of the matrix
	return traverseMatrix(arr,
						current_row + 1,
						0);
}

// Driver code
int main()
{
	int arr[N][M] = { { 1, 2, 3 },
					{ 4, 5, 6 } };

	traverseMatrix(arr, 0, 0);
	return 0;
}
