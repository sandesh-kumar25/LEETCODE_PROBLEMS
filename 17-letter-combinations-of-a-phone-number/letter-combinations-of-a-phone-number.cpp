class Solution {
public:
    vector<string> letterCombinations(string digits) {
       if(digits.empty())
        return {};

        string mp[10]={
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        vector<string> ans={""};
        for(char digit:digits){
            vector<string>tempo;
            for(string s: ans){
                for(char c: mp[digit-'0']){
                    tempo.push_back(s+c);
                }
            }
            ans=tempo;
        }
        return ans;
    }
};