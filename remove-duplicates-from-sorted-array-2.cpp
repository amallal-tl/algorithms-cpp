//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0, size = 1, duplicate = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[index] == nums[i]){
                duplicate+=1;
            } else if(nums[index] != nums[i]){
                duplicate=1;
            }
            if(duplicate <= 2){
                index+=1;
                nums[index] = nums[i];
                size+=1;
            }
        }        
        return size;
    }
};