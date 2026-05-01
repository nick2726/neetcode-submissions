class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0,right=n-1,result=0;
       // int result=0;
       while(left<right){
        int area=min(heights[left],heights[right])*(right-left);
        result=max(result,area);
        if(heights[left]<heights[right]){
            left++;
        }
        else{
            right--;
            }
        }
        return result;  
    }
};
