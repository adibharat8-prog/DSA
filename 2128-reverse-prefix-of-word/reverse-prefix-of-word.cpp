class Solution {
public:
    string reversePrefix(string word, char ch) {
        int low = 0;
        int high = 0;
        while (high < word.length() && word[high] != ch) {
            high++;
        }
        if (high >= word.length()) {
            return word;
        }
        while (low < high) {
            swap(word[high], word[low]);
            low++;
            high--;
        }
        return word;
    }
};