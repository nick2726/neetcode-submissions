class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
       // int ans=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]!=nums[i+1] && nums[i+1]-nums[i]==1)
            count++;
        }
        return count;
        
    }
};
