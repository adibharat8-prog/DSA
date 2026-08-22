class Solution {
public:
    string removeDuplicates(string s) {
        //Using string as a stack, so that we not need to revrse the string

        string ans;
        for(char ch: s){
            if(ans.length() != 0){
                if(ans.back() == ch){   //To check last element of string 
                    ans.pop_back();     //To delete from last of string
                }else{
                    ans.push_back(ch);  //To put at last of string
                }
            }else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};