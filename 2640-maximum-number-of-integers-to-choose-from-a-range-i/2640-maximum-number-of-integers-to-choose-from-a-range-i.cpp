class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
                int sum=0;
        int cnt=0;
        unordered_set<int>uset;

        for(int i=0;i<banned.size();i++){
            uset.insert(banned[i]);
        }


        for(int i=1;i<=n;i++){
            if(uset.find(i)==uset.end() && sum+i<=maxSum){
                cnt++;
                sum+=i;
            }
        }


        return cnt;
    }
};