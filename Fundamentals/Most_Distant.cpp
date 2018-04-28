// https://www.hackerrank.com/challenges/most-distant/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    double x, y;
    double x_min = 1e9 + 1;
    double x_max = -(1e9 + 1);
    double y_min = 1e9 + 1;
    double y_max = -(1e9 + 1);

    while (n--) {
        cin >> x >> y;

        if (x == 0) {
            y_max = max(y, y_max);
            y_min = min(y, y_min);
        }

        if (y == 0) {
            x_max = max(x, x_max);
            x_min = min(x, x_min);
        }
    }

    double ans = fmax({x_max - x_min, y_max - y_min,
                      sqrt(x_max * x_max + y_max * y_max),
                      sqrt(x_max * x_max + y_min * y_min),
                      sqrt(x_min * x_min + y_max * y_max),
                      sqrt(x_min * x_min + y_min * y_min)});

    cout << fixed << setprecision(20);
    cout << ans << endl;
    return 0;
}

/*
 * すべての点はx軸上かy軸上にある。
 * 一番外側の4点に注目すればよい。
 */
