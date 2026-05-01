class Solution {
public:
bool check(vector<int>&piles,int h,long long mid){
    long long ans=0;
    for(int x:piles){
        ans+=(x/mid);
    }
    return ans<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        long long low = 1;
        long long high =(*max_element(piles.begin(),piles.end()));
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (check(piles,h,mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};
