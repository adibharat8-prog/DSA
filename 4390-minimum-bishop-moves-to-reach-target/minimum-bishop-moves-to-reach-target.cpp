class Solution {
public:
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        if((abs(s[0]-s[1])%2==0 && abs(t[0]-t[1])%2==0) || //black 
        (abs(s[0]-s[1])%2 != 0 && abs(t[0]-t[1])%2 != 0)   //white
        ){
            if(s[0] == t[0] && s[1] == t[1]){
                return 0;
            }else if(abs(s[0] - t[0]) == abs(s[1] - t[1])){
                return 1;
            }else{
                return 2;
            }

        }else{
            return -1;
        }
    }
};