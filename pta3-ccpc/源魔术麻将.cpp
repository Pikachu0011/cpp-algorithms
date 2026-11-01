#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; t++) {
        string input;
        cin >> input;


        set<string> uniqueCards;
        unordered_map<string, int> cardCount;
        for (int i = 0; i < 28; i += 2) {
            string card = input.substr(i, 2);
            uniqueCards.insert(card);
            cardCount[card]++;
        }

        bool isThirteenOrphans = false;
        if (uniqueCards.size() == 13) {
            bool allValid = true;
            for (const string& card : uniqueCards) {
                char num = card[0];
                char suit = card[1];
                if (suit == 'p' || suit == 's' || suit == 'm') {
                    if (!((num == '1' || num == '9') && suit == card[1])) {
                        allValid = false;
                        break;
                    }
                }
                else if (suit == 'z') {
                    int honorNum = num - '0';
                    if (honorNum < 1 || honorNum > 7) {
                        allValid = false;
                        break;
                    }
                }
                else {
                    allValid = false;
                    break;
                }
            }
            if (allValid) {
                bool hasPair = false;
                for (const auto& pair : cardCount) {
                    if (pair.second == 2) {
                        hasPair = true;
                        break;
                    }
                }
                if (hasPair) {
                    isThirteenOrphans = true;
                }
            }
        }

        bool isSevenPairs = false;
        if (uniqueCards.size() == 7) {
            bool allPairs = true;
            for (const auto& pair : cardCount) {
                if (pair.second != 2) {
                    allPairs = false;
                    break;
                }
            }
            if (allPairs) {
                isSevenPairs = true;
            }
        }


        if (isThirteenOrphans) {
            cout << "Thirteen Orphans" << endl;
        }
        else if (isSevenPairs) {
            cout << "7 Pairs" << endl;
        }
        else {
            cout << "Otherwise" << endl;
        }
    }

    return 0;
}