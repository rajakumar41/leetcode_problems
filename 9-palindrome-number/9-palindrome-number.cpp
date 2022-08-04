class Solution {
public:
    bool isPalindrome(int x) {
       long  int temp =x;
        long int res =0;
        
        if(x>=0){
            while(x!=0){
                res = (res*10) + (x%10);
                x= x/10;
            }
        }
        else{
            return false;
        }
        
        if(res == temp)
            return true;
        else
            return false;
        
    }
};