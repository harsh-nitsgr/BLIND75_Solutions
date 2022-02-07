class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>binary(n+1);
        binary[0]=0;
        // n & (n-1) removes least significant bit
        for(int i=1;i<=n;i++){
            binary[i]=1+(binary[i&(i-1)]);
        }
        return binary;
    }
};