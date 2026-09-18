class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n>0){
            int d = n%10;
            sum += d;
            n = n/10;
        }
        cout<<sum<<endl;
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i: nums){
            sum1 += i;
            sum2 += digitSum(i);
        }
        cout<<sum1<<endl;
        cout<<sum2<<endl;
        return (sum1-sum2);
    }
};