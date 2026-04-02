// 75 DAYS LEETCODE CHALLENGE Day 21


class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<long> st; // Using long to safely handle intermediate calculations if needed

        for (const std::string& s : tokens) {
            // Check if the token is an operator
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                long b = st.top(); st.pop(); // Second operand (right side)
                long a = st.top(); st.pop(); // First operand (left side)
                
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else if (s == "/") st.push(a / b); // C++ truncates toward zero by default
            } else {
                // Convert string to integer and push to stack
                st.push(std::stoi(s));
            }
        }
        return (int)st.top();
    }
};
