class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> v;

        for(unordered_map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
            v.push_back({it->first, it->second});
        }

        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        string ans = "";

        for(int i = 0; i < v.size(); i++) {
            ans += string(v[i].second, v[i].first);
        }

        return ans;
    }
};