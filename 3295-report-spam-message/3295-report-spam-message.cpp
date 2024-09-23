class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
       unordered_set<string>mp(bannedWords.begin(),bannedWords.end());//stors banned words in set

       int cnt=0;
       for(string m:message){
        if(mp.find(m)!=mp.end())cnt++;
       }
       
     return cnt>=2? true:false;  
       
       }
};