// https://www.hackerrank.com/challenges/reverse-game/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k >= n / 2) {
            cout << 2 * (n - 1 - k) << endl;
        } else {
            cout << 2 * k + 1 << endl;
        }
    }
    return 0;
}

/*
 * n=5として実験する。
 * (0,1,2,3,4)
 * ->(4,3,2,1,0)
 * ->(4,0,1,2,3)
 * ->(4,0,3,2,1)
 * ->(4,0,3,1,2)
 * 偶数番は4,3,2と並び，奇数番は0,1と並ぶ。
 */
