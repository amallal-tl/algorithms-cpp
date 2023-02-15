#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 4; // no. of rows
	int m = 5; // no. of columns
	int a[n][m] = {{0, 6, 8, 9, 11},
				{20, 22, 28, 29, 31},
				{36, 38, 50, 61, 63},
				{64, 66, 100, 122, 128}};
	int k = 31; // element to search
	map<int,pair<int,int>>mp;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(k==a[i][j]){
		cout<<"Found at ("<<i<<","<<j<<")"<<endl;
		}
		mp[a[i][j]]={i,j};
	}
	}
if(mp.find(k)!=mp.end()){
	//cout<<"("<<mp[k]<<",)"<<endl;
	cout<<"This is how we can found using mapping: "<<endl;
	cout<<"("<<mp[k].first<<","<<mp[k].second<<")"<<endl;
	}else{
	cout<<"Not Found"<<endl;
	}
	return 0;
}
