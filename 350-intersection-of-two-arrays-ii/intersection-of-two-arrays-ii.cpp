class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        vector<int>arr;
        for(int num:nums1){
            map[num]++;
        }
        for(int x:nums2){
            if(map[x]>0){
                arr.push_back(x);
                map[x]--;

            }
        }
        return arr;
    }
    
};