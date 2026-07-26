class Solution {
public:
    bool search(vector<int>& nums, int target) {
       
       int start =0;
       int end =  nums.size()-1;

    
       while(start<=end){
         if(nums[start]==nums[end])
            {
                if(nums[start]==target) return true;
                else
                {
                    while(start<end&&nums[start]==nums[end])
                    {
                        start++;
                    }
                }
            }

        int mid = start +(end-start)/2;
         if(target==nums[mid]){
                return true;
            }
        if(nums[start]<=nums[mid]){
          
          if(nums[mid]>target && nums[start]<=target){
                end=mid-1;
          }
                else{
                    start=mid+1;
            }
        }
           else{
            if(nums[mid]<target && nums[end]>=target){
                start = mid+1;
            }
                else{
                    end=mid-1;
                }
        } 
       }    
       return false;
   
    }
};