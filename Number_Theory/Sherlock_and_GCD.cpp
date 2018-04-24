// https://www.hackerrank.com/challenges/sherlock-and-gcd/problem

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

        int multiple_gcd;
        cin >> multiple_gcd;
        for (int i = 0; i < n - 1; ++i) {
            int a;
            cin >> a;
            multiple_gcd = __gcd(multiple_gcd, a);
        }

        if (multiple_gcd == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*
 * 「a[n]全体の最大公約数が1かどうか」を調べる。
 */
