// https://www.hackerrank.com/challenges/summing-the-n-series/problem

#include <bits/stdc++.h>

using namespace std;

long long MOD = pow(10, 9) + 7;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        n %= MOD;
        cout << (n * n) % MOD << endl;
    }
    return 0;
}
/*
 * 和の中抜け。
 * T1=1^2-0^2
 * T2=2^2-1^2
 * ...
 * Tn=n^2-(n-1)^2
 * 答えはn^2
 */
