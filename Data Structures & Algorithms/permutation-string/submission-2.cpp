class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<m;i++){
            if (i + n > m)
            break;                   
            string substr = s2.substr(i, n);         
            sort(substr.begin(), substr.end());
            if (substr == s1) 
            return true;
        }
        return false;
        
    }
};
