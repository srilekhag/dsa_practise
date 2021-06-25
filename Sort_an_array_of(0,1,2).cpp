//leetcode solution of sort colors problem
//two-pointer approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0; //it is maintained for inserting 0's at begin
        int high = nums.size() - 1; //it is maintained for inserting 2's at end
        int mid = low;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                if(nums[mid] == 2){
                    swap(nums[mid], nums[high]);
                    high--;
                    
                }
            }
        }
        //print modified array
        cout<<"[";
        for(int i=0; i<nums.size(); i++){
            cout<<nums[i];
            if(i<nums.size()-1){
                cout<<",";
            }
        }
        cout<<"]";
    }
};
