class Solution {
public:
             int fibo(int x){
                if(x<=1) return x;

                return fibo(x-1)+fibo(x-2);
             }


    int fib(int n) {

        return fibo(n);
    }
};