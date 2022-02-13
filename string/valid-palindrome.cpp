class Solution {
public:
    bool isPalindrome(string s) {
        // cout<<'z'-'Z';
        int n=s.length();
        for(int i=0;i<n;i++){
            if((int)s[i]>=65 && (int)s[i]<=90){
                s[i]=s[i]+32;
            }
            else if((int)s[i]<65 || (int)s[i]>122){
                s.erase(s.begin() + i);
            }
        }
        cout<<s.length();
        
        return 1;
    }
};