// https://www.hackerrank.com/challenges/harry-potter-and-the-floating-rocks/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << __gcd(abs(x1 - x2), abs(y1 - y2)) - 1 << endl;
    }
    return 0;
}

/*
 * 直線の傾きの絶対値を既約分数に直す。
 * abs(y1-y2)/abx(x1-x2)=p/q
 * x方向にq進むごとに格子点がある。
 * abx(x1-x2)/q-1=gcd(abs(x1-x2), abs(y1-y2))-1
 * 回進めるので，これが求める個数。
 */
