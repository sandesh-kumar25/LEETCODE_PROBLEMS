class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        int ans=0;

        for(int i=0;i<=n;i++){
            while(!st.empty()&&(i==n||heights[st.top()]>=heights[i])){
                int h=heights[st.top()];
                st.pop();
                int l=st.empty()?-1:st.top();
                int w=i-l-1;

                ans=max(ans,h*w);
            }
            st.push(i);

        }
        return ans;
    }
};