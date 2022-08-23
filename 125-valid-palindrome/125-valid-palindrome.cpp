class Solution {
public:
    bool isPalindrome(string s) {
        string s1="",s2;
        
        for(int i=0;i<s.size();i++){
            if((s[i] >= 'A' && s[i] <='Z') || (s[i] >='a' && s[i] <= 'z')||( s[i] >= '0' && s[i] <= '9')){
                s1 += tolower(s[i]);
            }
        }
        // cout<<s1<<endl;
        int n = s1.size();
        for(int i=0;i<n/2;i++){
            if(s1[i] != s1[n-1-i]) return false;
        }
       
    return true;
    }
};

