class Solution {
public:
    bool iscy(int s, vector<bool>& vis, vector<bool>& rec, vector<vector<int>>& g) {
        vis[s] = true;
        rec[s] = true;

        for (int i = 0; i < g.size(); i++) {
            int u = g[i][1];
            int v = g[i][0];
            if (u == s) {
                if (!vis[v]) {
                    if (iscy(v, vis, rec, g)) {
                        return true;
                    }
                } else {
                    if (rec[v]) {
                        return true;
                    }
                }
            }
        }

        rec[s] = false;
        return false;
    }

    void tops(int s, vector<bool>& vis, stack<int>& st, vector<vector<int>>& g) {
        vis[s] = true;

        for (int i = 0; i < g.size(); i++) {
            int u = g[i][1];
            int v = g[i][0];
            if (u == s) {
                if (!vis[v]) {
                    tops(v, vis, st, g);
                }
            }
        }

        st.push(s);
    }

    vector<int> findOrder(int ncourse, vector<vector<int>>& g) {
        int n = ncourse; // Corrected: courses are from 0 to n-1

        // Cycle detection
        vector<bool> vis(n, false);
        vector<bool> rec(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (iscy(i, vis, rec, g)) {
                    return {}; // Cycle found, return empty
                }
            }
        }

        // Topological sort
        vector<bool> vis2(n, false);
        stack<int> st; // Missing semicolon fixed
        for (int i = 0; i < n; i++) {
            if (!vis2[i]) {
                tops(i, vis2, st, g);
            }
        }

        vector<int> a;
        while (!st.empty()) {
            a.push_back(st.top());
            st.pop();
        }
        return a;
    }
};
