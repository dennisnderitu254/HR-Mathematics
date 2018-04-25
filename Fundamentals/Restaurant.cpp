// https://www.hackerrank.com/challenges/restaurant/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, b;
        cin >> l >> b;
        int g = __gcd(l, b);
        cout << (l / g) * (b / g) << endl;
    }
    return 0;
}

/*
 * 長さlと幅bの最大公約数gを一辺とする立方体ができる。
 * その個数は(l/g)*(b/g)
 */
