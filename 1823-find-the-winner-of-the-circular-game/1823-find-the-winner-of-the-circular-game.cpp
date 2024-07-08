class Solution {
public:
    int findTheWinner(int n, int k) {
        vector <int> pos;
        for(int i=1; i<=n ; ++i) {
            pos.push_back(i);
        }
        int curr= 0;
        while(pos.size() > 1){
        int out = (curr + k - 1) % pos.size();
        pos.erase(pos.begin() + out);
        curr = out;
        }            
        return pos[0];
    }
};