class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        int mx=0;
        int minP=INT_MAX;

        for(int i=0;i<n;i++){
            mx=max(mx,items[i][0]);
            minP=min(minP,items[i][1]);
        }

        vector<int>freq(mx+1,0);

        for(int i=0;i<n;i++){
            freq[items[i][0]]++;
        }

        for(int i=1;i<=mx;i++){
            for(int j=2*i;j<=mx;j+=i){
                freq[i]+=freq[j];
            }
            if(freq[i]>0) freq[i]--;
        }

        sort(items.begin(),items.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });

        long long ans=0;
        long long rem=budget;

        for(int i=0;i<n;i++){
            int factor=items[i][0];
            int price=items[i][1];

            if(price>=2LL*minP) break;
            if(freq[factor]==0) continue;

            long long take=min((long long)freq[factor],rem/price);

            ans+=2*take;
            rem-=take*price;
        }

        ans+=rem/minP;

        return (int)ans;
    }
};