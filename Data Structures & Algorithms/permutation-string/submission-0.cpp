class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size()){
            return false;
        }

        unordered_map<char, int> freq;

        for(char c: s1){
            freq[c]++;
        }

        int start1 = 0, count = s1.size();

        for(int start2 = 0; start2 < s2.size(); start2++){

            if(freq[s2[start2]]-- > 0){
                count--;
            }

            if(count == 0) return true;

            if(start2 >= s1.size()-1){

                if(freq[s2[start1]]++ >= 0){
                    count++;
                }

                start1++;
            }
        }

        return false;  
    }
};
