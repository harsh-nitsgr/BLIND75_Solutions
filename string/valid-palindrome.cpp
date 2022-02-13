// important to check edge cases
class Solution {
public:
    bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { 
        while (!isalnum(s[i]) && i < j) i++;
        while (!isalnum(s[j]) && i < j) j--; 
        if (toupper(s[i]) != toupper(s[j])) return 0; 
    }
    return 1;
    }
};
