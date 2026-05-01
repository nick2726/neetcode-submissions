class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(char ch:s){
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        return rev==ans;
    }
};
