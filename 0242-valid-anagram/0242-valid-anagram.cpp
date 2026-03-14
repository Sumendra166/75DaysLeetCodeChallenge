//75DaysLeetCodeChallenge - DAY - 03

class Solution {
public:
    bool isAnagram(string s, string t) {

        // to check the length
        if (s.size() != t.size()) {
            return false;
        }

        int freq[26] = {0};

        // Counting characters in s string
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        // Subtracting characters in t string 
        for (int i = 0; i < t.size(); i++) {
            freq[t[i] - 'a']--;
        }

        // Check if all values are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};