// 75 DAYS LEETCODE CHALLENGE Day 22
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        
        vector<int> answer(n, 0);
        
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int previousIndex = st.top();
                st.pop();
                
                answer[previousIndex] = i - previousIndex;
            }
           
            st.push(i);
        }
        
        return answer;
    }
};
