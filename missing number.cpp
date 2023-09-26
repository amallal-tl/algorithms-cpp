class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        //int* arr = new int[n];
        int arr[n] = {0};
        int missing = -1;
        for(int i = 0; i < n; i++){
            cout << i+1 << "=" << array[i] << endl;
            if(array[i] == i+1){
                arr[array[i]] = 1;
               // cout << array[i] << " : " << arr[array[i]] << endl;
            }
        }
        
        for(int i = 0; i < n-1; i++){
            if((arr[i]-1) == 0)
                missing = i;
        }
        return missing;
    }
};