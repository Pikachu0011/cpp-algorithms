#include<bits/stdc++.h>
using namespace std;
const int M = 1e5 + 5;
struct student
{
    string id;
    string zhiye;//职业
    int sheng;//胜场数
    int cnt;//总场数
    int K;
    int D;
    int A;
    double score;//评分(保留两位小数)
    double rate;//（百分比，保留一位小数）
    char lev;
};
set<string> competitor;
vector<student> arr;
bool cmp(student x, student y) {
    if (x.lev != y.lev) {
        return x.lev > y.lev;
    }
    else {
        if (x.score != y.score)return x.score > y.score;
        else {
            if (x.rate != y.rate) {
                return x.rate > y.rate;
            }
            else {
                if (x.K != y.K)return x.K > y.K;
                else {
                    return x.id < y.id;
                }
            }
        }
    }
}
int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        string tid,tzhiye;
        int tsheng, tk, td, ta;
        cin >> tid >> tzhiye >> tsheng >> tk >> td >> ta;
        if (competitor.count(tid) == 0) {
            competitor.insert(tid);
            student person;
            person.A = ta;
            person.cnt = 1;
            person.D = td;
            person.id = tid;
            person.K = tk;
            person.sheng = tsheng;
            person.zhiye = tzhiye;
            arr.push_back(person);
        }
        else {
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i].id == tid) {
                    
                    arr[i].A += ta;
                    arr[i].cnt += 1;
                    arr[i].D += td;
                    arr[i].K += tk;
                    arr[i].sheng += tsheng;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].zhiye == "ADC" || arr[i].zhiye == "MID") {
            arr[i].score = (arr[i].K * 1.5 + arr[i].A * 1.0) / (1.0 * max(1, arr[i].D));
        }
        else if (arr[i].zhiye == "SUP") {
            arr[i].score = (arr[i].K * 1.0 + arr[i].A * 2.0) / (1.0 * max(1, arr[i].D));
        }
        else if (arr[i].zhiye == "TOP" || arr[i].zhiye == "JUG") {
            arr[i].score = (arr[i].K + arr[i].A) * 1.0 / (1.0 * max(1, arr[i].D));
        }
        //arr[i].score = 100 * arr[i].score;
        //arr[i].score = arr[i].score * 0.01;

        arr[i].rate = (double)arr[i].sheng / (arr[i].cnt * 1.0);
        arr[i].rate = arr[i].rate * 100;
        if (arr[i].cnt >= 5 && arr[i].rate >= 60.0) {
            arr[i].lev = 'S';
        }
        else arr[i].lev = 'A';
        
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i].id << " " << arr[i].lev;
        printf(" %.2lf %.1lf", arr[i].score,arr[i].rate);
        cout << "%\n";
    }

    return 0;
}