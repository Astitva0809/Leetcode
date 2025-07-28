class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
    int lsum=0,rsum=0,maxsum=0,ridx=n-1;
    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }
    maxsum=lsum;
    for(int i=k-1;i>=0;i--){
        lsum=lsum-arr[i];
        rsum+=arr[ridx];
        ridx--;
        maxsum=max(maxsum,lsum+rsum);
    }
    
     return maxsum;   }
};