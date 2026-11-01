//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n, m, k;
//    if (!(cin >> n >> m >> k)) return 0;
//    vector<int> seq(n), modi(n);
//    for (int i = 0; i < n; ++i) cin >> seq[i];
//    for (int i = 0; i < n; ++i) cin >> modi[i];
//
//    deque<int> fifo;                       // 工作区 FIFO
//    unordered_set<int> freeBuf, modBuf;    // 缓冲链表集合
//    unordered_map<int, int> loc;            // 0: none, 1: working, 2: freeBuf, 3: modBuf
//    unordered_map<int, bool> dirty;         // 仅对工作区内页面有效
//
//    int faults = 0;
//
//    auto do_flush_mod = [&]() {
//        // 批量写回：把 modBuf 中所有页面变为干净并移入 freeBuf
//        if (modBuf.empty()) return;
//        for (int p : modBuf) {
//            freeBuf.insert(p);
//            loc[p] = 2;
//        }
//        modBuf.clear();
//        };
//
//    for (int i = 0; i < n; ++i) {
//        int p = seq[i];
//        int w = modi[i];
//        int curLoc = loc.count(p) ? loc[p] : 0;
//
//        if (curLoc == 1) {
//            // 命中在工作区
//            if (w) dirty[p] = true;
//            continue;
//        }
//
//        if (curLoc == 2 || curLoc == 3) {
//            // 命中在缓冲链表 -> 迁回工作区（不算缺页）
//            bool prevDirty = (curLoc == 3);
//            if (curLoc == 2) freeBuf.erase(p); else modBuf.erase(p);
//            // ensure capacity: if full, evict FIFO front
//            if ((int)fifo.size() >= m) {
//                int victim = fifo.front(); fifo.pop_front();
//                bool vd = dirty[victim];
//                dirty.erase(victim);
//                if (vd) {
//                    modBuf.insert(victim);
//                    loc[victim] = 3;
//                }
//                else {
//                    freeBuf.insert(victim);
//                    loc[victim] = 2;
//                }
//                if ((int)modBuf.size() >= k) do_flush_mod();
//            }
//            // insert p into working
//            fifo.push_back(p);
//            loc[p] = 1;
//            dirty[p] = (prevDirty || (w == 1));
//            continue;
//        }
//
//        // 不在任何处 -> 缺页
//        faults++;
//        if ((int)fifo.size() < m) {
//            // 有空位直接装入
//            fifo.push_back(p);
//            loc[p] = 1;
//            dirty[p] = (w == 1);
//        }
//        else {
//            // 工作区已满，淘汰 FIFO 头并放入对应缓冲链表
//            int victim = fifo.front(); fifo.pop_front();
//            bool vd = dirty[victim];
//            dirty.erase(victim);
//            if (vd) {
//                modBuf.insert(victim);
//                loc[victim] = 3;
//            }
//            else {
//                freeBuf.insert(victim);
//                loc[victim] = 2;
//            }
//            if ((int)modBuf.size() >= k) do_flush_mod();
//            // 装入新页面
//            fifo.push_back(p);
//            loc[p] = 1;
//            dirty[p] = (w == 1);
//        }
//    }
//
//    int pct = (faults * 100) / n;
//    cout << faults << " " << pct << "\n";
//    return 0;
//}
