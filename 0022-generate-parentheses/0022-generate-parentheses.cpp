class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        function<void(string, int , int )>solve = [&](string curr, int open, int close){
            if(curr.size() == 2*n){
                result.push_back(curr);
                return;
            }
            if(open<n)
            solve(curr+"(", open+1, close);
            if(close<open)
            solve(curr+")", open, close+1);
        };
        solve("",0,0);
        return result;
    }
};