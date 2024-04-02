class Solution {
public:
    vector<int> rearange(string q){
        vector<int>sample;
        for(int i=1; i<q.length(); i++){
            int find=q.find(q[i]);
            sample.push_back(find);
        }
        return sample;
    } 
    bool isIsomorphic(string s, string t) {
        int k=s.length();
        int q=t.length();
        if(k!=q)return false;
        return rearange(s)==rearange(t);
    }
};