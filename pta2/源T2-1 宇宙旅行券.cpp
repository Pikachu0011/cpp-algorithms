#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i]; // 读取矩阵的每一行
    }

    string result;
    // 遍历每条斜线，总共有 2n-1 条斜线
    for (int d = 0; d < 2 * n - 1; ++d) {
        if (d % 2 == 0) { // 奇数编号的斜线（从1开始）
            // 右下到左上遍历
            int x = min(d, n - 1);         // 起始行：取d和n-1的较小值
            int y = max(0, d - (n - 1));   // 起始列：避免负数
            while (x >= 0 && y < n) {      // 确保不越界
                result.push_back(grid[x][y]);
                x--; // 向上移动
                y++; // 向左移动
            }
        }
        else { // 偶数编号的斜线
            // 左上到右下遍历
            int x = max(0, d - (n - 1));   // 起始行：避免负数
            int y = min(d, n - 1);         // 起始列：取d和n-1的较小值
            while (x < n && y >= 0) {      // 确保不越界
                result.push_back(grid[x][y]);
                x++; // 向下移动
                y--; // 向右移动
            }
        }
    }

    cout << result << endl;
    return 0;
}