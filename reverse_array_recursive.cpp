#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end){	
	if(start>=end)
		return;
	
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	reverseArray(arr, start+1, end-1);
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
	
	printArray(arr, n);
	
	reverseArray(arr, 0, n-1);
	
	printArray(arr, n);
}