class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>st;
        for(int i=0;i<n;i++){
             st[nums[i]]++;

             if(st[nums[i]]>1){
                return true;
             }

        }
        return false;
       
    }
};