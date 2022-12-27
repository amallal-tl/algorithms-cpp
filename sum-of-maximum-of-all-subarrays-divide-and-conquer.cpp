// C++ implementation of the above approach

#include <bits/stdc++.h>
#define seg_max 51
using namespace std;

// Array to store segment tree.
// In first we will store the maximum
// of a range
// In second, we will store index of
// that range
pair<int, int> seg_tree[seg_max];

// Size of array declared global
// to maintain simplicity in code
int n;

// Function to build segment tree
pair<int, int> buildMaxTree(int l, int r, int i, int arr[])
{
	// Base case
	if (l == r) {
		seg_tree[i] = { arr[l], l };
		return seg_tree[i];
	}

	// Finding the maximum among left and right child
	seg_tree[i] = max(buildMaxTree(l, (l + r) / 2, 2 * i + 1, arr),
					buildMaxTree((l + r) / 2 + 1, r, 2 * i + 2, arr));

	// Returning the maximum to parent
	return seg_tree[i];
}

// Function to perform range-max query in segment tree
pair<int, int> rangeMax(int l, int r, int arr[],
						int i = 0, int sl = 0, int sr = n - 1)
{
	// Base cases
	if (sr < l || sl > r)
		return { INT_MIN, -1 };
	if (sl >= l and sr <= r)
		return seg_tree[i];

	// Finding the maximum among left and right child
	return max(rangeMax(l, r, arr, 2 * i + 1, sl, (sl + sr) / 2),
			rangeMax(l, r, arr, 2 * i + 2, (sl + sr) / 2 + 1, sr));
}

// Function to find maximum sum subarray
int maxSumSubarray(int arr[], int l = 0, int r = n - 1)
{
	// base case
	if (l > r)
		return 0;

	// range-max query to determine
	// largest in the range.
	pair<int, int> a = rangeMax(l, r, arr);

	// divide the array in two parts
	return a.first * (r - a.second + 1) * (a.second - l + 1)
		+ maxSumSubarray(arr, l, a.second - 1)
		+ maxSumSubarray(arr, a.second + 1, r);
}

// Driver Code
int main()
{
	// Input array
	int arr[] = { 1, 3, 1, 7 };

	// Size of array
	n = sizeof(arr) / sizeof(int);

	// Builind the segment-tree
	buildMaxTree(0, n - 1, 0, arr);

	cout << maxSumSubarray(arr);

	return 0;
}
