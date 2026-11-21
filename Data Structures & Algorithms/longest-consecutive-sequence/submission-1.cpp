class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (int n : nums) {
            st.insert(n);
        }

        int largest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                int current = num;
                int len = 1;

                while (st.find(current+1) != st.end()) {
                    current++;
                    len++;
                }

                largest = max(largest, len);
            }
        }

        return largest;
    }
};
