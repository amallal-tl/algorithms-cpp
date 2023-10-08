//https://leetcode.com/problems/majority-element/submissions/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, elt = 0;
        for(int i = 0; i < nums.size(); i++){
           if(count == 0){ 
               elt = nums[i];
           }
            if(elt == nums[i]){
                count += 1;
            } else count -= 1;
        }
        
        return elt;
    }
};