class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;

        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                vowels.push_back(c);
            }

        }
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(char &c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                c=vowels[j];
                j++;
            }
        }
        return s;
    }
};