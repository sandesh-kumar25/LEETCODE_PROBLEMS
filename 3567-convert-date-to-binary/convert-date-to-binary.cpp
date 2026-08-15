class Solution {
public:
    string binarymehai(int n){
        string a="";
        while(n>0){
            a+=(n%2)+'0';
            n/=2;
        }
        reverse(a.begin(),a.end());
        return a;
    }
    string convertDateToBinary(string date) {
        int y=stoi(date.substr(0,4)); //4 is character kitne le rhe 0 index se
        int m=stoi(date.substr(5,2));
        int d=stoi(date.substr(8,2));
        return binarymehai(y)+"-"+binarymehai(m)+"-"+binarymehai(d);
    }
};