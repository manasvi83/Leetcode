class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.size(); 
        bool append = false; 
        string res = ""; 
        for (int i = len - 1; i >=0; i--){
            if((num[i] - '0')&1) 
                append = true; 
            if (append)
                res+=num[i]; 
        }
        reverse(res.begin(), res.end());
        return  res;
    }


    
};