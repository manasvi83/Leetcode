class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        function<vector<int>(vector<vector<int>>&)> func = [&](vector<vector<int>> &dependencies) -> vector<int> {
            vector<vector<int>> g(k + 1);
            vector<int> indegree(k + 1);
            for (auto &dep : dependencies) {
                g[dep[0] - 1].push_back(dep[1] - 1);
                indegree[dep[1] - 1]++;
            }
            
            queue<int> q;
            for (int i = 0; i < k; i++) {
                if (indegree[i] == 0) q.push(i);
            }
            
            int cnt = 0;
            vector<int> order;
            while (!q.empty()) {
                int cur = q.front(); q.pop();
                cnt++;
                order.push_back(cur);
                
                for (auto &neigh : g[cur]) {
                    if (--indegree[neigh] == 0) q.push(neigh);
                }
            }
            
            if (cnt == k) return order;
            return {};
        };
        
        vector<int> rowArr = func(rowConditions);
        vector<int> colArr = func(colConditions);
        if (rowArr.size() == 0 || colArr.size() == 0) return {};
        
        vector<vector<int>> idx(k, vector<int>(2, 0));
        for (int i = 0; i < k; i++) {
            idx[rowArr[i]][0] = i;
            idx[colArr[i]][1] = i;
        }
        
        vector<vector<int>> res(k, vector<int>(k, 0));
        for (int i = 0; i < k; i++) res[idx[i][0]][idx[i][1]] = i + 1;
        
        return res;
    }
};