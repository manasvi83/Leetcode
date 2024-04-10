class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> sorted = deck;
        sort(sorted.begin(), sorted.end());

        int n = deck.size();
        vector<int> ans(n);
        vector<bool> present(n, false);
        bool insert = true;
        int j = 0;
        for(int i = 0; j < n; i++) 
        {
            i %= n;
            if(insert & !present[i]) {
                present[i] = true;
                ans[i] = sorted[j++];
                insert ^= 1;
            } 
            else if(!present[i]) {
                insert ^= 1;
            }
        }
        return ans;
    }
};