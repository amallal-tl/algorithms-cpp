class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int> closest;
        closest.clear();
        int closerNumber = x;
        int l = 0, r = m-1;
        while(l<n && r>=0){
            int leftArr = arr[l];
            int rightBrr = brr[r];
            int diff = x-leftArr+rightBrr;
            if(diff<closerNumber){
                closerNumber = diff;
                closest.clear();
                closest.push_back(leftArr);
                closest.push_back(rightBrr);
            }
            
            if(diff<x){
                l+=1;
            }else{
                r-=1;
            }
        }
        
        return closest;
    }
};