class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
            multiset<int>st;
            for(int i=0;i<nums.size();i++)
            {
                st.insert(nums[i]);
            }
            int cnt=1;
            for(auto it=st.rbegin();it !=st.rend();it++)
            {
                if(cnt==k) return *it;
                cnt++;
            }
        return -1;
    }
};