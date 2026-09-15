

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> last_seen_index;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (last_seen_index.find(nums[i]) != last_seen_index.end()) {
            
                if (i - last_seen_index[nums[i]] <= k) {
                    return true;
                }
            }
        
            last_seen_index[nums[i]] = i;
        }
        
        return false;
    }
};
