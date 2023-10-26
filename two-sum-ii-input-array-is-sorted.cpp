class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l = 0, r = numbers.size() - 1;
       vector<int> index;
       while(l < r){
           if(numbers[l] + numbers[r] == target){
               index.push_back(l+1);
               index.push_back(r+1);
               break;
           } else if(numbers[l]+numbers[r] < target){
               l++;
           }else r--;
       }
       return index;
    }
};