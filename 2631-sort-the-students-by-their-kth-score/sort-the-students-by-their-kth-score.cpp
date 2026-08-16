class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        //using lambda function in it.
        sort(score.begin(),score.end(),
         [k](vector<int>&a,vector<int>&b){
            return a[k]>b[k];
        }
        );
        return score;
    }
};