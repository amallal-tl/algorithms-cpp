using namespace std;

int main(){
	vector<int>vec = {5, 1, 6, 4, 9, 8};
	for(int i = 1; i < vec.size(); i++){
		if(vec[i-1] > vec[i]){
			int temp = vec[i];
			vec[i] = vec[i-1];
			vec[i-1] = temp;
			for(int j = i; j > 0; i--)	{
				
			}
		}
	}
}