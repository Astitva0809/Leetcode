class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        if( arr == brr ) return 0 ;

        long long cost2 = 0, n= arr.size() ;
        for(int i = 0 ;i < n ; i++) {
            cost2 += abs(arr[i] - brr[i]) ;
        }
        
        sort(arr.begin() , arr.end()) ;
        sort(brr.begin() , brr.end()) ;

        long long cost = k;
        for(int i = 0 ;i < n ; i++) {
            cost += abs(arr[i] - brr[i]) ;
        }
        return min(cost2 , cost) ;
    }
};