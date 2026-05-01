class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        unordered_map<char, int> mpp1;
        for (char ch : s1) {
            mpp1[ch]++;
        }

        for (int i = 0; i < m; i++) {
            unordered_map<char, int> mpp2;
            int curr = 0;

            for (int j = i; j < m; j++) {
                char ch2 = s2[j];
                mpp2[ch2]++;

                if (mpp1[ch2] < mpp2[ch2]) 
                    break;

                if (mpp1[ch2] == mpp2[ch2])
                    curr++;

                if (curr == n)
                    return true;
            }
        }
        return false;
    }
};