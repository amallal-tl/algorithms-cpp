//https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0, size = 1;

        if(nums.empty())
            return 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[index] != nums[i]){
                ++index;
                nums[index] = nums[i];
                ++size;
            }
        }
        return size;
    }
};