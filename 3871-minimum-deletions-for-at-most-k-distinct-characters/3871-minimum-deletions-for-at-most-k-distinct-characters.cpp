class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>mp;
        for(char it:s){
            mp[it]++;

        }
        vector<int>cnt;
        for(auto it:mp){
            cnt.push_back(it.second);
        }
        sort(cnt.begin(),cnt.end());
        int del=0;
        int extra=cnt.size()-k;
        for(int i=0;i<extra;i++){
            del+=cnt[i];
        }
      return (extra > 0) ? del : 0;   }
};