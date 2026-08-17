class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int num;

        for(int i = 0; i < nums.size(); i++){
            num = 1;
            for(int j = 0; j < nums.size(); j++){
                if (i == j) continue;
                num *= nums[j];
            }
            ans.push_back(num);
        }

        return ans;
    }
};
