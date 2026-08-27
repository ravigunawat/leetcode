class Solution {
public:
    int missingNumber(vector<int>& nums) {       
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size();
        while(start<end){
            int mid = start+(end-start)/2;

            if(nums[mid]==mid){
                start = mid+1;
            }
            else{
                end = mid;
        }
        }
        return start;
    }
};