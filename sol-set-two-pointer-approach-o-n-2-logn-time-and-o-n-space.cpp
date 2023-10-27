class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        int pivot = 0, left = pivot+1, right = nums.size()-1;
        while(left < right){
            int sum = nums[pivot] + nums[left] + nums[right];
            cout << nums[pivot] << "+" << nums[left] <<"+"<< nums[right] << "=" << sum << endl;
            if(sum == 0){
                vector<int> v;
                v.push_back(nums[pivot]);
                v.push_back(nums[left]);
                v.push_back(nums[right]);
                s.insert(v);
                left++;//[,-4,-1,-1,0,1,2]
            }else if(sum < 0){
                left++;
            }else if(sum > 0){
                right--;
            }
            pivot++;
        }
        
        vector<vector<int>> finalV;
        for(auto itr = s.begin(); itr != s.end(); itr++){
            finalV.push_back(*(itr));
        }

        return finalV;
    }
};