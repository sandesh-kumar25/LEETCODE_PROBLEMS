class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int diff;
        int maxi=0;
        sort(nums.begin(),nums.end());
        if(n<=1){
            return 0;
        }
        else{
            for(int i=0;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            maxi=max(maxi,diff);
        }
        }
        return maxi;
    }
};