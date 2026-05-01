class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(auto it:strs){
            vector<int> count(26,0);
            for(char ch:it){
                count[ch-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++){
                key+=','+to_string(count[i]);
            }
            res[key].push_back(it);
        }
        vector<vector<string>> result;
        for(auto it: res){
            result.push_back(it.second);
        }
        return result;

        
    }
};
