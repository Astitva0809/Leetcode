class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
         for (int i = n-2; i >=0; i--) {
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
        }
        
   
        for (int i = 0; i < n; ++i) {
            int shift = shifts[i] % 26; // Ensure shift is within the range [0, 25]
        
            

            s[i] = ((s[i] - 'a' + shift) % 26) + 'a';
            /*
                Note : s[i]-'a' gives the corresponding number of character s[i]
                       +shift adds the shift
                       %26 is to wrap around (0-25)
                       'a' + in the end converts back the number to character
            */
        }
        
        return s;
    }
};