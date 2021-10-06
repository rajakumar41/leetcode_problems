class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans =0,x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                x = x-1;
                ans = x;
            }
            else{
               x = x +1;
                ans = x;
            } 
        }
        return ans;
    }
};