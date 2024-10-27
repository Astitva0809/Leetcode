class Solution {
public:
    int possibleStringCount(string word) {
        int cnt=0;
        int n=word.size();
        for(int i=0;i<n-1;i++){
            if(word[i]==word[i+1])cnt++;
        }
   return cnt+1; }
};