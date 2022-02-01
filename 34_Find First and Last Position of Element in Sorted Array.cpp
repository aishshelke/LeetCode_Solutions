class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int n=nums.size();
    
 int start=0;
        int end=n-1;
        int f=-1,l=-1;
         while(start<=end){
            int mid=(end+start)/2;
            if(nums[mid]==target){
                f=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
             }
        }
        start=0,end=n-1;
          while(start<=end){
            int mid=(end+start)/2;
            if(nums[mid]==target){
                l=mid;
                start=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
             }
        }
        
       
        
        
        
        
        
        return {f,l};
        
        
        
        
    }
};