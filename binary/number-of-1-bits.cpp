// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int num=0;
//         for(int i=0;i<32;i++) if((n & (1<<i))!=0) num++;
        
//         return num;
//     }
// };

// second soultion 
// n&(n-1) always removes least significant setbit
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n!=0){
            cnt++;
            n=n&(n-1);
        }
        return cnt;
    }
};