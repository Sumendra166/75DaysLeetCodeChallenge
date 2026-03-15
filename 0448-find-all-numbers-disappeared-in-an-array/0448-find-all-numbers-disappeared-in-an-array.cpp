// 75DaysLeetCodeChallenge DAY - 4
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;
        unordered_set<int> s;

        int n = nums.size();

        
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

      
        for(int i = 1; i <= n; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};