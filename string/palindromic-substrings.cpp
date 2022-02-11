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

//using dynamic programming
class Solution{
    public:
    
    int countSubstrings(string s){
        
        bool dp[s.size()][s.size()];
        int count=0;
        
        for(int g=0;g<s.size();g++){
            for(int i=0,j=g;j<s.size();j++,i++){
                if(g==0) dp[i][j]=1;
                else if(g==1){
                    if(s[i]==s[j])dp[i][j]=1;
                    else dp[i][j]=0;
                }
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                if(dp[i][j]==1)count++;
            }
        }
        return count;
    }  
};
