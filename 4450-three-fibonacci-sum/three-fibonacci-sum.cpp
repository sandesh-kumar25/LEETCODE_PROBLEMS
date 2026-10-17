class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=0,b=1,c=1;
        //int sum=a+b+c;
        while(a+b+c <= n){
            if(a+b+c == n){
                return true;
            }
            int temp=b+c;
            a=b;
            b=c;
            c=temp;
        }
        return false;
    }
};