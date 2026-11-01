/*#include<cstdio>
const int N = 1e2 + 5;
int main()
{
    int numa[N], sum = 0, num, temp, n;

    scanf("%d", &n);//输入人数
    for (int i = 1; i <= n; i++)
        scanf("%d", &numa[i]);//输入每个人的糖果数量
    while (1) {
        num = 1;
        for (int i = 2; i <= n; i++)//只要前后者任意一个不相等就是全局不等
            if (numa[i] == numa[i - 1])num++;
            else    break;
        if (num == n)break;//如果每组对比相等数量与人数相等就是全局相等
        for (int i = 1; i <= n; i++)numa[i] /= 2;//每人糖果数减半
        temp = numa[1];
        for (int i = 1; i < n; i++)//前者加上后者的糖果数
            numa[i] += numa[i + 1];
        numa[n] += temp;
        for (int i = 1; i <= n; i++)//查找含有奇数个糖果的人，把他们变为偶数
            if (numa[i] & 1) { numa[i]++; sum++; }
    }
    printf("%d\n", sum);
}*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int numa[105];
    int sum = 0;
    int n;//人数
    cin >> n;
    int num;
    for (int i = 1; i <= n; i++) {
        cin >> numa[i];

    }
    while (1) {
        num = 1;
        for (int i = 2; i <= n; i++) {
            if (numa[i] == numa[i - 1])
                num++;
            else {
                break;
            }

        }
        if (num == n)
            break;
        for (int i = 1; i <= n; i++) {
            numa[i] /= 2;

        }
        int temp = numa[1];
        for (int i = 1; i < n; i++) {
            numa[i] += numa[i + 1];
        }
        numa[n] += temp;
        for (int i = 1; i <= n; i++) {
            if (numa[i] % 2 == 1) {
                numa[i]++;
                sum++;
            }
        }
        
    }
    cout << sum;



    return 0;
}