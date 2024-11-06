class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c = 0;
        int n=sizeof(nums);
        for (int num:nums){
               c ^=num;
        }
        return c;
        
    }
};