class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=1,high=nums.size()-2,mid;
        if(nums.size()==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[high]!=nums[high+1])return nums[high+1];

        while(low<=high){
            mid=(low+high)/2;
            //if(mid==nums.size()-1 && nums[mid]!=nums[mid-1])return nums[mid];
           // if(mid==0 && nums[mid]!=nums[mid+1])return nums[mid];
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])return nums[mid];

            else if(mid%2){
                if(nums[mid]==nums[mid+1])high=mid-1;
                else low=mid+1;
            }
            else{
                
                if(nums[mid]==nums[mid-1])high=mid-1;
                else low=mid+1;
            }
        }return -1;
    }
};