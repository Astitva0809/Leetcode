class Solution {
public:
    string resultingString(string s) {
        stack<int>st;
            for (char c : s) {
            if (!st.empty() &&
                (abs(st.top() - c) == 1 || abs(st.top() - c) == 25)) {
                st.pop(); // Remove the consecutive pair
            } else {
                st.push(c); // Keep the character
            }
        }
   s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};