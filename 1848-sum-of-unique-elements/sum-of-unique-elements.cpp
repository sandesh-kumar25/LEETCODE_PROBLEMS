class Solution { //solve by sung freq array
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>freq(101);
        for(int n:nums){
            freq[n]++;
        }
        int sum=0;
        for(int i=1;i<=100;i++){
            if(freq[i]==1) sum += i;
        }
        return sum;

    }
};