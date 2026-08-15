class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length() - 1;
        int len = 0;

        while(j>=0 && s[j] == ' '){       //To remove all blanck spaces
            j--;
        }
        
        while(j>=0 && s[j] != ' '){       //for length of last word
            len++;
            j--;
        }
        
        return len;
    }
};