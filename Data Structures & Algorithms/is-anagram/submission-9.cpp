class Solution {
   public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int s2 = t.size();
        if (s1 != s2) {
            return false;
        }
        vector<int> count(26,0);
        for(int i=0;i<s1;i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int val:count){
            if(val!=0){
                return false;
            }
        }
        return true;
    }
};
