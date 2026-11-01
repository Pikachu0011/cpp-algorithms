//#include <bits/stdc++.h>
//#include<unordered_map>
//using namespace std;
//using ll = long long;
//const ll INF = (1LL << 60);
//
//struct Node {
//    ll time;
//    int trans; // number of transfers (intermediate cities)
//    int v;
//    bool operator<(const Node& other) const {
//        if (time != other.time) return time > other.time; // for min-heap
//        return trans > other.trans;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int N;
//    if (!(cin >> N)) return 0;
//    vector<string> names(N);
//    vector<int> transTime(N);
//    unordered_map<string, int> id;
//    for (int i = 0; i < N; ++i) {
//        cin >> names[i] >> transTime[i];
//        id[names[i]] = i;
//    }
//    int M; cin >> M;
//    vector<vector<pair<int, int>>> g(N);
//    for (int i = 0; i < M; ++i) {
//        string a, b; int w;
//        cin >> a >> b >> w;
//        int u = id[a], v = id[b];
//        g[u].push_back({ v,w });
//        g[v].push_back({ u,w });
//    }
//    string Sname, Tname;
//    cin >> Sname >> Tname;
//    if (id.find(Sname) == id.end() || id.find(Tname) == id.end()) {
//        cout << "Why not go home by plane?\n";
//        return 0;
//    }
//    int S = id[Sname], T = id[Tname];
//    // Dijkstra with pair (time, transfers)
//    vector<ll> distTime(N, INF);
//    vector<int> distTrans(N, INT_MAX);
//    vector<int> pre(N, -1);
//    priority_queue<Node> pq;
//    distTime[S] = 0;
//    distTrans[S] = 0;
//    pq.push({ 0,0,S });
//
//    while (!pq.empty()) {
//        Node cur = pq.top(); pq.pop();
//        int u = cur.v;
//        if (cur.time != distTime[u] || cur.trans != distTrans[u]) continue;
//        if (u == T) break; // 已到最优终点
//        for (auto& e : g[u]) {
//            int v = e.first;
//            int w = e.second;
//            ll addTime = w;
//            int addTrans = 0;
//            if (v != T) { addTime += transTime[v]; addTrans = 1; }
//            ll nt = distTime[u] + addTime;
//            int nc = distTrans[u] + addTrans;
//            if (nt < distTime[v] || (nt == distTime[v] && nc < distTrans[v])) {
//                distTime[v] = nt;
//                distTrans[v] = nc;
//                pre[v] = u;
//                pq.push({ nt, nc, v });
//            }
//        }
//    }
//
//    if (distTime[T] == INF) {
//        cout << "Why not go home by plane?\n";
//        return 0;
//    }
//
//    // 重建路径
//    vector<int> path;
//    int cur = T;
//    while (cur != -1) {
//        path.push_back(cur);
//        if (cur == S) break;
//        cur = pre[cur];
//    }
//    reverse(path.begin(), path.end());
//    // 输出
//    cout << distTime[T] << "\n";
//    for (size_t i = 0; i < path.size(); ++i) {
//        if (i) cout << "->";
//        cout << names[path[i]];
//    }
//    cout << "\n";
//    return 0;
//}
