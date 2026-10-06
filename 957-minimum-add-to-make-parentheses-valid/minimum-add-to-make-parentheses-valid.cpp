class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0;
        int right=0;
        for(char ch:s){
            if(ch=='('){
                l++;
            }
            else{
                if(l>0){
                    l--;
                }
                else
                    right++;
            }
        }
        return l+right;
    }
};