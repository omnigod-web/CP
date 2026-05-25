//1472B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) count1++;
            else count2++;
        }

        int sum = count1 + 2 * count2;

        if (sum % 2) {
            cout << "NO\n";
        }
        else {
            int half = sum / 2;

            if (half % 2 == 1 && count1 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}



