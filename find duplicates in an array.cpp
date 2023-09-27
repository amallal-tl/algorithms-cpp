//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        int array[n] = {0};
        bool isNotEmpty = false;
        vector<int> duplicate;
        for(int i = 0; i<n; i++){
            array[arr[i]] +=1;
        }
        for(int i = 0; i<n; i++){
            if(array[i] > 1){
                isNotEmpty = true;
                duplicate.push_back(i);
            }
        }
        if(!isNotEmpty)
            duplicate.push_back(-1);
            
        return duplicate;
        
    }
};