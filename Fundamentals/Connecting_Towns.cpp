// https://www.hackerrank.com/challenges/connecting-towns/problem

#include <bits/stdc++.h>

using namespace std;

const int MOD = 1234567;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        n--;
        int ans = 1;
        while (n--) {
            int roots;
            cin >> roots;
            ans *= roots;
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
 * 道の数の総積
 */
