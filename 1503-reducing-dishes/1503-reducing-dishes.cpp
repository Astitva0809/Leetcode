class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
         sort(arr.begin(),arr.end());
        int n=arr.size();
        int suffix[n];
        
        suffix[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+arr[i];
        }

        int idx=-1;
        for(int i=0;i<n;i++){
            if(suffix[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int j=1;
        int res=0;
        for(int i=idx;i<n;i++){
            res+=j*arr[i];
            j++;
        }
        return res;

    }
};