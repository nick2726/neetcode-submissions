class Solution {
   public:
    bool isPalindrome(string s) {
        string newStr = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                // newStr += tolower(ch);
                newStr.push_back(tolower(ch));
            }
        }
        string reversed = newStr;
        reverse(reversed.begin(), reversed.end());
        return newStr == reversed;
    }
};
