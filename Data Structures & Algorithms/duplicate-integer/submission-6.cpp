class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int x : nums){
            st.insert(x);
        }

        return nums.size() != st.size();
    }
};