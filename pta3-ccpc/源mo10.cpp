//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int len = s.size();
//    int a = 0, b = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] == '0')
//            a++;
//        else
//            b++;
//    }
//    if (a != b)
//    {
//        cout << "-1" << endl;
//        return 0;
//    }
//    cout << len / 2 << endl;
//    int k = 0;
//    for (int i = 0; i < len;)
//    {
//        if (s[i] == '0' && s[i + 1] == '1')
//        {
//            k++;
//            cout << k << " " << "1" << endl;
//            i += 2;
//        }
//        else if (s[i] == '1' && s[i + 1] == '0')
//        {
//            k++;
//            cout << k << " " << "2" << endl;
//            i += 2;
//        }
//        else if (s[i] == '1' && s[i + 1] != '0')
//        {
//            int t = 0;
//            k++;
//            while (s[i] == '1')
//            {
//                t++;
//                cout << k << " " << "2" << endl;
//                i++;
//            }
//            k = k + t - 1;
//            i = i + t;
//        }
//        else if (s[i] == '0' && s[i + 1] != 1)
//        {
//            int t = 0;
//            k++;
//            while (s[i] == '0')
//            {
//                t++;
//                cout << k << " " << "1" << endl;
//                i++;
//            }
//            k = k + t - 1;
//            i = i + t;
//        }
//    }
//    return 0;
//}