//using kadane's algorithm
int maxSubArray(vector<int>& nums) {
        
        int sum = nums[0];
        for(int i =1 ; i<nums.size(); i++){
            nums[i] = max(nums[i], nums[i]+nums[i-1]);
            sum = max(sum, nums[i]);
            
        }
       
        return sum;
        
    }
