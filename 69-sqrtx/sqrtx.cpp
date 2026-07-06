class Solution {
public:
    int mySqrt(int x) {

        if(x==0 || x==1){
            return x;
        }

        int i=0;
        int j=x;
        int ans=0;
        while(i<=j){
            long long mid = i+(j-i)/2;
            if(mid*mid == x){
                return mid;
            } else if (mid*mid < x){
                i = mid+1;
                ans = mid;
            } else{
                j = mid-1;
            }
        }
        return ans;
    }
};