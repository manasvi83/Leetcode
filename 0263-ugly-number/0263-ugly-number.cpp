class Solution {
public:
    vector<int> prime={2,3,5};
    bool isUgly(int n) {
        // if(n%2==0 && n%3==0 && n%5==0) return true;
        // else if(n%2==0 && n%3==0 || n%2==0 ||n% 3==0 || n%5==0) return true;
        // else if(n%3==0 && n%5==0) return true;
        // else if(n%2==0 && n%5==0) return true;
        // else if(n==1) return true;
        
        if (n < 1) return false;
        for (int p: prime) while (n % p == 0) n /=p;
        return n == 1;
        
        // else return false;
    }
};

        