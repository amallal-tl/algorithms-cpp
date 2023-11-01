#include <iostream>
#include <vector>

using namespace std;

void print(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[6] = {13, 11, 5, 6, 16, 2};
	int sizeArr = (sizeof(arr)/sizeof(int));
	print(arr, sizeArr);
	for(int i = 0; i < sizeArr; i++){
		for(int j = i; j > 0; j--){
			if(arr[j] < arr[j-1]){
				//cout << "Elt : " << arr[j] << " < " << arr[j-1] << endl;
				int temp = arr[j] + arr[j-1];
				arr[j-1] = temp - arr[j-1];
				arr[j] = temp-arr[j];
			}
		}
	}
	print(arr, sizeArr);
}