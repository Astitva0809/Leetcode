class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                st.push(s[i]);
            }
              else if(!st.empty())
                st.pop();
        }
        int n1=st.size();
        return (n1+1)/2;
    }
};