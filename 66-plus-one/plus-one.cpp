class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits.size()+1);
        int n = digits.size();
        int val = n-1;
        bool empty = false;

        while(digits[val]==9){
            if(val>0){
                val--;
            }else{
                empty = true;
                break;
            }
        }

        cout<<val<<endl;
        digits[val]++;
        val++;
        cout<<"val"<<val<<endl;
        for(int i=val; i<digits.size(); i++){
            cout<<i<<endl;
            digits[i] = 0;
        }


        if(empty){            
            ans[val-1] = 1;
            val;
            for(int i=val; i<ans.size(); i++){
                
                ans[i] = 0;
            }
        }

        return (empty)? ans : digits;
    }
};

// vector<int> ans;
//         long long d = 0;
//         for(int i=0; i<digits.size(); i++){
//             d = d*10 + digits[i];
//         }
//         d++;
//         while(d>0){
//             int dt = d%10;
//             ans.push_back(dt);
//             d = d /10;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;