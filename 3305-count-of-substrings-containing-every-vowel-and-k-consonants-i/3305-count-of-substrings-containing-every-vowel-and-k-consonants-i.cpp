class Solution {
public:
      bool solve(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countOfSubstrings(string word, int k) {
    int n = word.length();
    int result = 0;
    
    for (int i = 0; i < n; i++) {
        unordered_set<char> vo;
        int cons = 0;
        int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
        
        for (int j = i;j < n;j++ ) {
            char ch = word[j];
            
            if (solve(ch)) {
                vo.insert(ch);
                if(ch=='a')cnt1++;
                else if(ch=='e')cnt2++;
                else if(ch=='i')cnt3++;
                else if(ch=='o')cnt4++;
                else cnt5++;
                
                
            } else {
                cons++; 
            }
            
     
            if (vo.size() == 5 && cons == k && cnt1>=1 && cnt2>=1 && cnt3>=1 && cnt4>=1 && cnt5>=1) {
                result++;
            }
            
            if (cons > k) break;
        }
    }
    
    return result;
    }
};