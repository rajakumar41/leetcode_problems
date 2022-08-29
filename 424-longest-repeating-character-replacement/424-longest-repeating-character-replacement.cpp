class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int maxL=0,j=0,max_occ=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
            max_occ = max(max_occ, mp[s[i]]);
            if((i - j+1) - max_occ > k){
                mp[s[j]]--;
                j++;
            }
            else
                maxL = max(maxL, i-j+1);
        }
        return maxL;
    } 
};