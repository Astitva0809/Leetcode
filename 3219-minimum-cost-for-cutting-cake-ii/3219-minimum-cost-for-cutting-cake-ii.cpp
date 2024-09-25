class Solution {
public:
typedef long long ll;
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        ll ans=0;
        int hznum=1;
        int vnum=1;
        int i=0,j=0;
         n=horizontalCut.size();
         m=verticalCut.size();
        sort(horizontalCut.rbegin(),horizontalCut.rend());
        sort(verticalCut.rbegin(),verticalCut.rend());
        while(i<n && j<m){
            if(horizontalCut[i]>=verticalCut[j]){
                ans+=horizontalCut[i]*vnum;
                hznum++;i++;
            }
            else {
                ans+=verticalCut[j]*hznum;
                vnum++;j++;
            }
        }

while(i<n){
    ans+=horizontalCut[i]*vnum;
                hznum++;i++;
}
while(j<m){
     ans+=verticalCut[j]*hznum;
                vnum++;j++;
}

 return ans;  
    }
};