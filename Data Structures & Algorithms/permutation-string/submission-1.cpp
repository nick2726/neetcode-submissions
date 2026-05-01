class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                string substr=s2.substr(i,j-i+1);
                sort(substr.begin(),substr.end());
                if(substr==s1){
                    return true;
                }
            }
        }
        return false;

        
    }
};
