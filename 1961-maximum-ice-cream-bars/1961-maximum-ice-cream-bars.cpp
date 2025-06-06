class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs), end(costs));
        
        int count = 0;
        
        for(int &cost : costs) {
            if(cost > coins)
                break;
            else {
                count++;
                coins -= cost;
            }
        }
        
        return count;
    }
};