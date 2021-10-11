class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        bool flag = true;
        for(auto ch:s){
            if(isalnum(ch))
                str += ch;
        }
        
        
        // cout<<str<<endl;
        for( int i=0;i<str.size();i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
        int j = str.size()-1;
        int i=0;
        
        while(i<=j){
            if(str[i] != str[j]){
                flag = false;
                break;
            }
            i++;j--;
        }
        if(flag == false)
            return false;
        else
            return true;
    }
};