class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
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

        digits[val]++;
        val++;
        for(int i=val; i<digits.size(); i++){
            digits[i] = 0;
        }


        if(empty){          
            vector<int> ans(digits.size()+1);  
            ans[val-1] = 1;
            val;
            for(int i=val; i<ans.size(); i++){
                
                ans[i] = 0;
            }
            return ans;
        }

        return digits;
    }
};