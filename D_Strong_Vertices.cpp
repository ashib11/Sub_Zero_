#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // Adjacency list to represent the graph
vector<bool> visited;
stack<int> st;

void dfs1(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u, vector<int>& component) {
    visited[u] = true;
    component.push_back(u);
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs2(v, component);
        }
    }
}

vector<vector<int>> findSCCs(int n) {
    visited.assign(n + 1, false);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs1(i);
        }
    }

    adj.assign(n + 1, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int v : adj[i]) {
            adj[v].push_back(i); // Reverse the edges for the second DFS
        }
    }

    visited.assign(n + 1, false);
    vector<vector<int>> SCCs;

    while (!st.empty()) {
        int u = st.top();
        st.pop();
        if (!visited[u]) {
            vector<int> component;
            dfs2(u, component);
            SCCs.push_back(component);
        }
    }

    return SCCs;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    adj.assign(n + 1, vector<int>());

    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            if (a[u] - a[v] >= b[u] - b[v] && u != v) {
                adj[u].push_back(v);
            }
        }
    }

    vector<vector<int>> SCCs = findSCCs(n);

    vector<int> strongVertices;
    for (const vector<int>& component : SCCs) {
        bool hasIncomingEdge = false;
        for (int u : component) {
            for (int v : adj[u]) {
                if (find(component.begin(), component.end(), v) == component.end()) {
                    hasIncomingEdge = true;
                    break;
                }
            }
            if (hasIncomingEdge) {
                break;
            }
        }

        if (!hasIncomingEdge) {
            strongVertices.insert(strongVertices.end(), component.begin(), component.end());
        }
    }

    sort(strongVertices.begin(), strongVertices.end());
    cout << strongVertices.size() << endl;
    for (int u : strongVertices) {
        cout << u << " ";
    }
    cout << endl;
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
