// https://www.hackerrank.com/challenges/summing-the-n-series/problem

#include <bits/stdc++.h>

using namespace std;

const long long MOD = pow(10, 9) + 7;

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
 * ˜a‚Ì’†”²‚¯B
 * T1=1^2-0^2
 * T2=2^2-1^2
 * ...
 * Tn=n^2-(n-1)^2
 * “š‚¦‚Ín^2
 */
