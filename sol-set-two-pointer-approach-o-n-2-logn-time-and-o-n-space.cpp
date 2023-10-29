class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        int pivot = 0, vecSize = nums.size()-1;
        while(pivot<vecSize){
            int left = pivot+1, right = vecSize, target = 0;
            while(left < right){
                int sum = nums[pivot] + nums[left] + nums[right];
                if(sum == target){
                    vector<int> v;
                    v.push_back(nums[pivot]);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                    s.insert(v);
                    left++;
                    right--;
                }else if(sum < 0){
                    left++;
                }else if(sum > 0){
                    right--;
                }
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
//-2, 0 , 2 === 

/*[-4, -2, -1, -1, 0, 1, 2]
-4, -2, 2 = -4 < 0 -> j++ 
-4, -1, 2 = -3 < 0 -> j++
-4, 0, 2 = -2 < 0 -> j++
-4, 1, 2 = -1 < 0 -> j++ break; i++

[-4, -2, -1, -1, 0, 1, 2]
-2, -1, 2 = -1 < 0 j++
-2, 0 , 2 = 0 = 0, j++, k--, break;

[-4, -2, -1, -1, 0, 1, 2]
-1, -1, 2 = 0 = 0, j++, k--
-1, 0, 1 = 0 = 0, j++, k--

[-4, -2, -1, -1, 0, 1, 2]
-1, 0, 2 = 1 > 0 k--
-1, 0 , 1 = 0 = 0, j++, k--
*/