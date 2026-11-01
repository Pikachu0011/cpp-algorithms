#include"iostream"
using namespace std;
int main() {
    enum week {
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    int n;
    cin >> n;
    switch (n) {


    case Monday:
        cout << "3" << endl;
        break;
    case Tuesday:
        cout << "4" << endl;
        break;
    case Wednesday:
        cout << "5" << endl;
        break;
    case Thursday:
        cout << "6" << endl;
        break;
    case Friday:
        cout << "7" << endl;
        break;
    case Saturday:
        cout << "1" << endl;
        break;
    case Sunday:
        cout << "2" << endl;
        break;
    }




    return 0;

}



