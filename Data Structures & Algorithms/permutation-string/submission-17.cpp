class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        vector<int> c1(26,0);
        vector<int> c2(26,0);
        for(int i=0;i<n;i++){
            c1[s1[i]-'a']++;
            c2[s2[i]-'a']++;
        }
        int matches=0;
        for(int i=0;i<26;i++){
            if(c1[i]==c2[i]){
                matches++;
            }
        }
        int l=0;
        while(r<m){
            if(matches==26){
                return true;
            }
            int index=s2[r]-'a';
            c2[index]++;
            if(c1[index]==c2[index]){
                matches++;
            }else if(c1[index]+1==c2[index]){
                matches--;
            }
            index=s2[l]-'a';
            c2[index]--;
            if(c1[index]==c2[index]){
                matches++;
            }else if(c1[index]-1==c2[index]){
                matches--;
            }
            l++;
        }
        return matches==26;
       
    }
};
