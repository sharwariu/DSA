class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            // Swap the characters at positions i and j
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            
            // Move towards the center
            i++;
            j--;
        }
    }
};
