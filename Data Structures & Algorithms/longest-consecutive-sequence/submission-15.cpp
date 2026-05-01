class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int maxLen=1;
        int currLen=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }else if(nums[i]-nums[i-1]==1){
                currLen++;
            }else{
                maxLen=max(maxLen,currLen);
                currLen=1;
            }
        }
        return max(maxLen,currLen);
    }
};
