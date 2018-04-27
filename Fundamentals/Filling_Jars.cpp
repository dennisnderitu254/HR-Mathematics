// https://www.hackerrank.com/challenges/filling-jars/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    long long ans = 0;
    while (m--) {
        long long a, b, k;
        cin >> a >> b >> k;
        ans += (b - a + 1) * k;
    }
    ans /= n;

    cout << ans << endl;
    return 0;
}

/*
 * 総和を求めて割る。
 */
