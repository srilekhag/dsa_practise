//array contains elements between 1 and array's size, so this method works fine.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,res=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i])] >= 0)
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
                res = abs(nums[i]);
        }
        return res;
    }
};
