class Solution {
public:
     bool isPrime(int num){
        if(num == 2) return true;
        if(num%2 == 0) return false;
        for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        string mid = to_string(n);
        //reverse(mid.begin(),mid.begin()+mid.length());
        reverse(mid.begin(),mid.end());
        int n2 = stoi(mid);
        
        int ans = 0;
        int num1 = min(n,n2);
        int num2 = max(n,n2);
        for(int i=num1; i<=num2; i++){
            if(i==1) continue;
            if(isPrime(i)){
                ans += i;
                cout<<i<<endl;
            }
        }
       
        return ans;
    }
};