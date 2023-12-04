class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //shifting all non zeroes to left we r doing this, hmne question ko apne hisab sai change krlia or logic lgaya or answer nikal lia
        

        int nonZero = 0 ; //ye represent kr ra hai ki apki pehli nonzero value is index pr aani chahiye;

        for( int j = 0 ; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
        
    }
};

