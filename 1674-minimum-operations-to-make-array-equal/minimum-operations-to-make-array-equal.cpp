class Solution {
public:
    int minOperations(int n) {
        return n*(n-1+1)/4;
    }
};