//https://www.geeksforgeeks.org/count-ways-reach-nth-stair-using-step-1-2-3/

#include<iostream>

using namespace std;

int findStep(int n){
	if(n == 0)
		return 1;
	else if(n < 0)
		return 0;
	else 
		return findStep(n-3) + findStep(n-2) + findStep(n-1);
}

int main(){
	int steps = 0 ;
	cout << "Enter steps count : ";
	cin >> steps;
	cout << "Total steps : " << findStep(steps) << endl;
	
}