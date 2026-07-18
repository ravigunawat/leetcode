class Solution {
public:
    int findGCD(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    int min=nums.front();
    int max= nums.back();

    while(max!=0){
        int temp=max;
        max=min%max;
        min=temp;
    }
    return min;

    }
};