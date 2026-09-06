class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();

        vector<vector<unsigned long long>>dimpi(n+1,vector<unsigned long long>(m+1,0));
        for(int i=0;i<=n;i++){
            dimpi[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                dimpi[i][j]=dimpi[i-1][j];

                if(s[i-1]==t[j-1]){
                    dimpi[i][j]+=dimpi[i-1][j-1];
                }
            }
        }
        return dimpi[n][m];
    }
};