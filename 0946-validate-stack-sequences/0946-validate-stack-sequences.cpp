class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
          int n = pushed.size();
    stack<int> st;
    int i = 0, j = 0;

   
    while (i < n) {
        st.push(pushed[i++]); 
        while (!st.empty() && st.top() == popped[j]) {
            st.pop();
            j++; 
        }
    }

    
    return st.empty();
    }
};