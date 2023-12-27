class Solution {
public:
    int reverse(int x) {
        long int a=abs(x);
        long int rev_x=0;
        while (a!=0)
        {
            int k=a%10;
            rev_x=(rev_x*10)+k;
            a/=10;
        }
        if(rev_x>=pow(2,31)-1 || rev_x<=-pow(2,31)) return 0;
        if(x>=0) return rev_x;
        else return -rev_x;
    }
};