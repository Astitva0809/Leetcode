class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n =bank.size();
        int prevOnes=0;
        int laser=0;
        for(int i=0;i<n;i++){
            string s=bank[i];
            int currOnes=0;
            for(int j=0;j<s.size();j++){
                if(s[j]=='1')currOnes++;
            }
            
            laser+=(currOnes*prevOnes);
            if(currOnes!=0)prevOnes=currOnes;
        }
        
   return laser; }
};