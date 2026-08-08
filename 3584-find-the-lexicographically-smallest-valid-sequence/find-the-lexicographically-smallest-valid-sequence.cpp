class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        vector<int>ans(word2.size());
        vector<int> suf(word2.size(),-1);
            int i=word1.size()-1;
            int j=word2.size()-1;

            while(i>=0 && j>=0){
                if(word1[i]==word2[j]){
                    suf[j]=i;
                    j--;
                }
                i--;
            }
            bool skip=true;
            j=0;
            for(int i=0;i<word1.size();i++){
                if(j==word2.size()){
                    break;
                }
                if(word1[i]==word2[j]){
                    ans[j]=i;
                    j++;
                }
                else if(skip && (j==word2.size()-1||i<suf[j+1])){
                    ans[j]=i;
                    j++;
                    skip=false;
                }
            }
            if(j!=word2.size()){
                return {};
            }
        
        return ans;
    }
};