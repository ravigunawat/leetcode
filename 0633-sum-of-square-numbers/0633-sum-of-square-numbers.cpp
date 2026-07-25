class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long start=0;
        long long end=sqrt(c);
        long long ans=0;
        while(start<=end){
            ans = start*start+end*end;
            if(ans==c) return true;
            if(ans<c){
                start++;
            }
            else{
                end--;
            }
        }

      return false;
    }
};