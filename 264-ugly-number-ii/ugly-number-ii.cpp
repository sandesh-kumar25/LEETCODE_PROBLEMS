class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);

        ugly[0] = 1;

        int i2 = 0, i3 = 0,i5 = 0;

        for(int i = 1; i < n; i++) {
            
            int a =ugly[i2] * 2;
            int b =ugly[i3] * 3;
            int c =ugly[i5] * 5;

            int next=min({a, b, c});

            ugly[i]=next;

            if(next==a)
                i2++;

            if(next==b)
                i3++;

            if(next == c)
                i5++;
        }

        return ugly[n - 1];
    }
};