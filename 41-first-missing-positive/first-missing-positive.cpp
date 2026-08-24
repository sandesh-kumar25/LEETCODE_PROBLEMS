class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        int x=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                x++;
            }
            
        }
        return x;
    } //but this solution takes tc as O(nlogn).*/
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>=1 && nums[i]<=n && nums[nums[i]-1] != nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
    }
};