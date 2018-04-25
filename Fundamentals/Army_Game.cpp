// https://www.hackerrank.com/challenges/game-with-cells/forum

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = (m + m % 2) * (n + n % 2) / 4;
    cout << ans << endl;
    return 0;
}

/*
 * サンプルで示されているように1つの物資で4マスをカバーできる。
 * 必要なら縦横を1マス伸ばして，縦横とも偶数にする。
 * この後で4マスの中央に物資を投下する。
 */
