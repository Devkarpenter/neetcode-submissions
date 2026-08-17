class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        bool ans = false;

        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] == nums[i]){
                ans = true;
                break;
            } 
            
        }

        return ans;
        
    }
};