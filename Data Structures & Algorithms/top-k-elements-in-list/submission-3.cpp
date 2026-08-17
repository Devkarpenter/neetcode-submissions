class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> count;
        vector<int> ans;

        // Count frequency of each number
        for (int num : nums) {
            mp[num]++;
        }

        // Store (frequency, number) pairs
        for (auto it : mp) {
            count.push_back({it.second, it.first});
        }

        // Sort by frequency in descending order
        sort(count.rbegin(), count.rend());

        // Pick top k frequent elements
        for (int i = 0; i < k; i++) {
            ans.push_back(count[i].second); // push the number, not frequency
        }

        return ans;
    }
};
