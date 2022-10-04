class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, -1);
        int start = 0, maxi = 0, n = s.size();
        for(int i=0;i<n;i++){
            start = max(start, freq[s[i]]+1);
            maxi = max(maxi, i-start+1);
            freq[s[i]] = i;
        }
        return maxi;
    }
};
