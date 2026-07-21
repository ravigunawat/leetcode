class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){return 1;}
        if(nums.size()<4){return 0;}
        int ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                i+=2;
            }
            else{
                ans=nums[i];
            }
        }
        if(nums[nums.size()-2]!=nums[nums.size()-1]){
                ans = nums[nums.size()-1];
            }

        return ans;
  
        
        
    }
};