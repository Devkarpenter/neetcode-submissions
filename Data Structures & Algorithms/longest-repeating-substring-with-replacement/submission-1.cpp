class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> freq(26, 0);

        int left = 0, maxFreq = 0, maxL = 0;

        for(int right = 0; right < s.size(); right++){

            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int window = right - left + 1;

            if(window - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            } 

            maxL = max(maxL, right - left + 1);
        }

        return maxL;
        
    }
};
