class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int>pq(begin(nums),end(nums));
        while(k--){
            int mx=pq.top();
            pq.pop();
            sum+=mx;
            int x=ceil(mx/3.0);
            pq.push(x);

        }
 return sum;   }
};