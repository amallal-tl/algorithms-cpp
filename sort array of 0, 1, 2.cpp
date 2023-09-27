//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&sortBy=submissions
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        vector<int> vec0;
        vector<int> vec1;
        vector<int> vec2;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                vec0.push_back(0);
            }else if(a[i] == 1){
                vec1.push_back(1);
            }else{
                vec2.push_back(2);
            }
        }
        
        for(auto itr = vec0.begin(); itr!=vec0.end(); itr++){
            cout << *(itr) << " ";
        }
        for(auto itr = vec1.begin(); itr!=vec1.end(); itr++){
            cout << *(itr) << " ";
        }
        for(auto itr = vec2.begin(); itr!=vec2.end(); itr++){
            cout << *(itr) << " ";
        }
    }
    
};