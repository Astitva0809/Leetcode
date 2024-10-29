class Solution {
public:
    int minCost(string s, vector<int>& neededTime) {
        int n=s.size();
        int prevmax=0;
        int time=0;
        for(int i=0;i<n;i++){
            if(i>0 && s[i]!=s[i-1]){
                prevmax=0;
            }

            int curr=neededTime[i];
            time+=min(prevmax,curr);
            prevmax=max(prevmax,curr);
        }
   return time; }
};