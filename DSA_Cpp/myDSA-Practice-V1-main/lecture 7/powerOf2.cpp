class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans = 0;

        for( int i = 0 ; i <= 30 ; i++){

            if( n == pow(2,i)){
                return true;
            }
        }
        

        return false;
    }
};