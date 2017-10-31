#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
const ull MOD = pow(10, 9) + 7;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        n %= MOD;
        cout << (n * n) % MOD << endl;
    }
    return 0;
}