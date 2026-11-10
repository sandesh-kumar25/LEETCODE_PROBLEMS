class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
      vector<int>sk(n+1, INT_MAX);
      sk[0]=0;
      
      for(int i=0;i<n;i++){
            for(int j=i+1; j<=min(n,i+3);j++){
                int jump=j-i;

                sk[j]=min(sk[j],sk[i]+costs[j-1] + jump * jump);
            }
      }
      return sk[n];

    }
};