class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count =0;
        int n= (start^goal);
       for (int i = 0; i < sizeof(int) * 8; i++)
       {
            if (n & (1 << i)) count++;
       }    
            
        // if((start^goal)==1) count++;        
        return count;
    }
};