#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int v_min = 1e9, v_max = 1;
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        v_min = min(v_min, a / b );
        v_max = max(v_max, a / b);
    }

    printf("%d %d\n", v_min, v_max);
    return 0;
}