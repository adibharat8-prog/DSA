class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum =0;
        long long x = n;
        int rev = 0;

        while(x>0){
            int lastDigit = x%10;

            if(lastDigit != 0){
                rev = rev*10 + lastDigit;
                sum += lastDigit;
            }
            x = x/10;
        } 
        
        long long newNo = 0;
        
        while(rev>0){
            newNo = newNo*10 + rev%10;
            rev = rev/10;
        } 

        return newNo*sum;
    }
};