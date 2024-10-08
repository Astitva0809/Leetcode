class Solution {
public:
    int minInsertions(string s) {
           int openCount = 0;  // To track unclosed '('
        int insertions = 0; // To count required insertions

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                openCount++;  // We need 2 closing parentheses for every '('
            } else {
                // Handle ')' - closing parentheses
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    // Found a pair of '))'
                    if (openCount > 0) {
                        openCount--;  // Match with an existing '('
                    } else {
                        insertions++;  // No matching '(', insert a '('
                    }
                    i++;  // Skip the next ')'
                } else {
                    // Single ')' found, need to insert another ')'
                    if (openCount > 0) {
                        openCount--;  // Match with an existing '('
                        insertions++;  // Need one more ')' to complete the pair
                    } else {
                        insertions += 2;  // No matching '(', need to insert one '(' and one ')'
                    }
                }
            }
        }

        // At the end, for every unmatched '(', we need 2 closing ')'
        insertions += 2 * openCount;

        return insertions;}
};