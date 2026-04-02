// 75 DAYS LEETCODE CHALLENGE Day 21


class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<long> st; 

        for (const std::string& s : tokens) {
           
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                long b = st.top(); st.pop(); 
                long a = st.top(); st.pop(); 
                
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else if (s == "/") st.push(a / b); 
            } else {
                
                st.push(std::stoi(s));
            }
        }
        return (int)st.top();
    }
};
