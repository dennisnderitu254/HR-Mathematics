// https://www.hackerrank.com/challenges/halloween-party/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k;
        cin >> k;
        cout << (k / 2) * (k - (k / 2)) << endl;
    }
    return 0;
}

/*
 * 縦に切る回数と横に切る回数が近い方がいい。
 */
