class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;

        while(n){
            int bit = n & 1;
            if(bit) c++;
            n = n >> 1;

        }

        return c;
    }
};