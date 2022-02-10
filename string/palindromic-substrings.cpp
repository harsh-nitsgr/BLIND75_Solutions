class Solution{
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){   
            // odd palindromes
            for(int j=i,k=i;j<s.size() && k>=0;j++,k--){
                if(s[j]==s[k])count++;
                else break;
            }
            // even palindromes
            for(int j=i,k=i-1;j<s.size() && k>=0;j++,k--){
                if(s[j]==s[k])count++;
                else break;
            }
        }
        return count;
    }
};