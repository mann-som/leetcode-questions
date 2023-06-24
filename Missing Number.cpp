class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int result;
        std:sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){

            if(nums[i] != i){

                result = i;
                break;
            }
            else{
                result = i + 1;
            }
        }
        return result;
    }
};