// https://www.hackerrank.com/challenges/constructing-a-number/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int tmp = 0;
        while (n--) {
            string s;
            cin >> s;
            for (auto &x:s) {
                tmp += (int) x % 3;
            }
        }

        if (tmp % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

/*
 * ŠeˆÊ‚Ì”Žš‚Ì˜a‚ª3‚ÅŠ„‚èØ‚ê‚é‚©‚Ç‚¤‚©‚ð’²‚×‚éB
 */
