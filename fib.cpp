#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int a31= a4 - a2;
        int a32 = a5 - a4;
        int maxF = 0;
        for (int a3 : {a31, a32}) {
            int f = (a3 == a1 + a2) + (a4 == a2 + a3) + (a5 == a3 + a4);
            if (f > maxF) maxF = f;
        }
        cout << maxF << endl;
    }
    return 0;
}