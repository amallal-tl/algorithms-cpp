// C++ program to find distinct elements
// common to all rows of a matrix
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

// function to individually sort
// each row in increasing order
void distinct(int mat[][MAX], int N)
{

// make a empty map
unordered_map<int,int> ans;

// Insert the elements of
// first row in the map and
// initialize with 1
for (int j = 0; j < N; j++) {
	ans[mat[0][j]]=1;
}

// Traverse the matrix from 2nd row
for (int i = 1; i < N; i++) {
	for (int j = 0; j < N; j++) {

	// If the element is present in the map
	// and is not duplicated in the current row
	if (ans[mat[i][j]] != 0
		&& ans[mat[i][j]] == i) {

		// Increment count of the element in
		// map by 1
		ans[mat[i][j]]= i + 1;

		// If we have reached the last row
		if (i == N - 1) {

		// Print the element
		cout<<mat[i][j]<<" ";
		}
	}
	}
}
}

// Driver program to test above
int main()
{
int N=4;

int mat[][MAX] = { {2, 1, 4, 3},
					{1, 2, 3, 2},
					{3, 6, 2, 3},
					{5, 2, 5, 3} };

distinct(mat, N);
return 0;
}