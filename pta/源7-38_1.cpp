//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int  N = 100000;
//
//int main()
//{
//    int n;
//    int k;
//    cin >> n;
//    int id;    //用于记录不帅，有朋友的ID
//    int x[N] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        cin >> k;
//        for (int j = 0; j < k; j++)
//        {
//            cin >> id;
//            if (k != 1)
//                x[id] = 1;
//        }
//    }
//    int m;
//    cin >> m;
//    int idx;
//    int sum = 0;
//    for (int i = 0; i < m; i++)
//    {
//        cin >> idx;
//        if (x[idx] == 0)
//        {
//            if (sum != 0)
//            {
//                printf(" %05d", idx);
//            }
//            else if (sum == 0)
//            {
//                printf("%05d", idx);
//            }
//            x[idx] = 1;
//            sum++;
//        }
//    }
//    if (sum == 0)
//        cout << "No one is handsome";
//    cout << endl;
//    return 0;
//}
