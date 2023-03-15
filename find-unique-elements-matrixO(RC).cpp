// C++ program to find unique element in matrix
#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

// function that calculate unique element
int unique(int mat[R][C], int n, int m)
{
	// declare map for hashing
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			// increase freq of mat[i][j] in map
			mp[mat[i][j]]++;

	int flag = false;
	// print unique element
	for (auto p : mp) {
		if (p.second == 1) {
			cout << p.first << " ";
			flag = 1;
		}
	}

	if (!flag) {
		cout << "No unique element in the matrix";
	}
}

// Driver program
int main()
{
	int mat[R][C] = { { 1, 2, 3, 20 },
					{ 5, 6, 20, 25 },
					{ 1, 3, 5, 6 },
					{ 6, 7, 8, 15 } };

	// function that calculate unique element
	unique(mat, R, C);
	return 0;
}
