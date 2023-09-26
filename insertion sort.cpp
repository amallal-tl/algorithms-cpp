#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int>vec = {5, 1, 6, 4, 9, 8};
	for(int i = 1; i < vec.size(); i++){
		for(int j = i; j > 0; j--)	{
			if(vec[j-1] > vec[j]){
				int temp = vec[j];
				vec[j] = vec[j-1];
				vec[j-1] = temp;					
			}
		}
	}
	
	for(auto itr = vec.begin(); itr != vec.end(); itr++){
		cout << *(itr) << " ";
	}
	cout << endl;
}