class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int sum=0;
        vector<pair<int,int>>arr;

        for(int i=0;i<nums.size();i++){
            arr.push_back({digitsum(nums[i]),nums[i]});
        }
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[arr[i].second]=i;
        }

        vector<bool>visit(n,false);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(visit[i]||mp[nums[i]]==i) continue;
            int j=i,cycle=0;

            while(!visit[j]){
                visit[j]=true;
                j=mp[nums[j]];
                cycle++;
            }
            swaps += cycle-1;
        }
        return swaps;
    }

    
};