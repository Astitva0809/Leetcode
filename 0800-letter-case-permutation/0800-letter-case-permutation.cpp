class Solution {
public:
 void solve(int ind, vector<string>&v,string &s , int n){
       if(ind==n){
        v.push_back(s);
        return;
    }
    if(isdigit(s[ind])){
        solve(ind+1, v, s,n);
    }else{
        s[ind]=toupper(s[ind]);
        solve(ind+1, v, s,n);
        s[ind]=tolower(s[ind]);
        solve(ind+1, v, s,n);
    }
   }


    vector<string> letterCasePermutation(string s) {
        vector<string>v;
        int n=s.size();
        solve(0,v,s,n);
        return v;
    }
};