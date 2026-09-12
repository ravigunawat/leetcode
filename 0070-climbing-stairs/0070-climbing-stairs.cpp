class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int first = 1;
        int second=2;
        int curnt=0;
        for(int i=3; i<=n; ++i){
            curnt = first+second;
            first = second;
            second=curnt;

        }
        return curnt;
        
    }
};