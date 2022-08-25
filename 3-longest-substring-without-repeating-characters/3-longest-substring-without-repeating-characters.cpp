class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,0);
        int res =0,n = s.size(),i=0,j=0;
        while(i<n){
            while(j<n && freq[s[j]] == 0){
                freq[s[j]]++;
                j++;
            }
            res = max(res,j-i);
            freq[s[i]]--;
            i++;
        }
        return res;
    }
};