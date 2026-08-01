class Solution {
public:

    int Sum(int n){
        int num = n;
        int sum = 0;
        while(num>0){
            int d = num % 10;
            num = num / 10;
            sum = sum + d*d;
        }
        return sum;
    }

    bool isHappy(int n) {
       unordered_set<int> set;

    while(n!=1){
        n = Sum(n);
        if(set.count(n)){
            return false;
        }
        set.insert(n);
    }
    return true;
    }
};