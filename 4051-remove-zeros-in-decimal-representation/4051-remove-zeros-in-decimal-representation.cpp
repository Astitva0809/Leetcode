class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string t="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0')t+=s[i];
        }
        n=stoll(t);
        return n;
    }
};