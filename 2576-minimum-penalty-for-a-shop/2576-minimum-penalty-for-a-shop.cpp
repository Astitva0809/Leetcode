class Solution {
public:
    int bestClosingTime(string customers) {
         int n = customers.length();

        vector<int> prefixN(n+1,0);

        vector<int> suffixY(n+1,0);

        for(int i=1;i<=n;i++) {
            prefixN[i] = prefixN[i-1];

            if(customers[i-1] == 'N')
                prefixN[i]++;
        }


        for(int i=n-1;i>=0;i--) {
            suffixY[i] = suffixY[i+1];

            if(customers[i] == 'Y')
                suffixY[i]++;
        }


        int minPenalty = INT_MAX;
        int ind = 0;

        int penalty = 0;

        for(int i=0;i<=n;i++) {
            penalty = prefixN[i] + suffixY[i];

            if(penalty < minPenalty) {
                minPenalty = penalty;
                ind = i;
            }
        }

        return ind;
    }
};