class Solution {
public:
    int search(vector<int>& nums, int target) {
 int n=nums.size();
        
        int start=0,end=n-1;
        while(start<=end){
          int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>=target){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(nums[end]>=target && nums[mid]<=target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        
        
        
        
        
        
        
        return -1;
            }
};