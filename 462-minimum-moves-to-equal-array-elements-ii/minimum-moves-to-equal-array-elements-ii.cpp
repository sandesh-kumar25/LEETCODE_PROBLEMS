class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int need=nums[nums.size()/2];
        for(int i=0; i<nums.size();i++){
            count += abs(nums[i]-need);
        }
        return count;
    }
};