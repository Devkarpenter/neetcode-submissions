class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> Freq(26, 0);

        int left = 0, maxFre = 0, maxL = 0;

        for(int right = 0; right < s.size(); right++){

            Freq[s[right] - 'A']++;

            maxFre = max(maxFre, Freq[s[right] - 'A']);

            int window = right - left + 1;

            if(window - maxFre > k){
                Freq[s[left] - 'A']--;
                left++;
            }

            maxL = max(maxL, right - left + 1);
        }

        return maxL;
        
    }
};
