class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> v(10);

        string word;

        while(ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();

            v[pos] = word;
        }

        string ans = "";

        for(int i = 1; i <= 9; i++) {
            if(v[i] != "") {
                if(ans != "") ans += " ";
                ans += v[i];
            }
        }

        return ans;
    }
};