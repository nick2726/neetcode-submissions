class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=n-1;i>0;i--){
            for(int j=1;j<n-1;j++){
                ans=nums[i]*nums[j];
            }
        }
        return nums[ana];
    }
};
