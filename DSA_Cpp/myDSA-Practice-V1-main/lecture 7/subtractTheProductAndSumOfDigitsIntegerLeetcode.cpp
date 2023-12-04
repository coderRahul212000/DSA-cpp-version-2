class Solution {
public:
    int subtractProductAndSum(int n) {
       
       int val = n;
       int p = 1;
       int s = 0;

       //product and sum
       while(val){
           int d = val%10;
           p = p * d;
           s = s + d;
           val = val/10;
       }

       return p-s;


    }
};
