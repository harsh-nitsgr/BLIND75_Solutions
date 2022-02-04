class Solution {
public:
    int getSum(int a, int b) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        while(b){
            //take care of carry
            int temp=(uint32_t)(a&b)<<1; //convert to unsigned int
            a=a^b;
            b=temp;            
        }
        return a;
    }
};