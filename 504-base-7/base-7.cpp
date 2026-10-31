class Solution {
public:
    string convertToBase7(int num) {
       int base=7;
       string ans="";
       if(num==0) return "0";
       long long num1 =abs((long long)num);

       while(num1>0){
        int rem=num1 % base;
        ans += to_string(rem);
        num1 = num1/base;
       } 
       
       reverse(ans.begin(),ans.end());
       if(num<0){
        ans= "-" + ans;
       }

       return ans;
    }
};