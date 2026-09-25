class Solution {
public:
    int getAns(int n){
        string ch = to_string(n);
        cout<<ch<<endl;
        vector<int> a(ch.length());
        int idx=0;
        while(n>0){
            int d = n%10;
            a[idx] = d;
            n = n/10;
            idx++;
        }
        
        int res = 0;
        for(int i=1; i<(a.size()-1); i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                res++;
            }else if(a[i]<a[i-1] && a[i]<a[i+1]){
                res++;
            }
        }
        return res;
    } 

    int totalWaviness(int num1, int num2) {
       int waviness = 0;
       for(int i=num1; i<=num2; i++){
           waviness += getAns(i);
       } 
       
       return waviness;
    }
};