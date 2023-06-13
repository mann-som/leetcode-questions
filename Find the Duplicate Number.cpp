class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i <nums.size(); i++){

            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }

        return 0;
    }
};