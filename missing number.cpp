//O{N} complexity
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int arr[n] = {0};
        int missing = -1;
        for(auto itr = array.begin(); itr!=array.end(); itr++){
            arr[*(itr)-1] = 1;
        }
        
        for(int i = 0; i < n; i++){
            if((arr[i]) == 0)
                missing = i+1;
        }
        return missing;
    }
};