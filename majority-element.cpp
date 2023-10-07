class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, count = 0 ,size = nums.size();
        std::array<size, int> arr = {0};
        for(int i = 0; i < nums.size(); i++){
           arr[nums[i]] += 1;
           count = arr[nums[i]/2;
           if(count > major)
            major = count;
        }
        
        return major;
    }
};