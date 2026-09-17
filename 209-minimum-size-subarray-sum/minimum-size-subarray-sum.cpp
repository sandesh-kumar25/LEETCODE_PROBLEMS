class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left,sum=0;
        int a=INT_MAX;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                a=min(a,right-left+1);

                sum=sum-nums[left];
                left++;
            }
        }
        if(a==INT_MAX)
            return 0;
        
        return a;
    }
};