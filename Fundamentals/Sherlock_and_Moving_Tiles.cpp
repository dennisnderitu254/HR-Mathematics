// https://www.hackerrank.com/challenges/sherlock-and-moving-tiles/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double L, s1, s2;
    cin >> L >> s1 >> s2;

    int q;
    cin >> q;
    while (q--) {
        double area;
        cin >> area;
        double ans = abs(sqrt(2.0) * (sqrt(area) - L)) / abs(s1 - s2);

        cout << fixed << setprecision(20);
        cout << ans << endl;
    }
    return 0;
}

/*
 * 簡単のためs2>s1とする。
 * y=xにそった座標軸をとって考える。動きはじめてt秒後，
 * 左側の正方形の右上の頂点の座標は
 * s1*t+√2/2*L
 * 右側の正方形の左下の頂点の座標は
 * s2*t-√2/2*L
 * これらの差は
 * (s1-s2)t+√2L
 * 与えられた面積areaをもつ正方形の対角線の長さは
 * √area*√2
 * これらが等しくなる条件は
 * t=(√area*√2-√2L)/(s1-s2)
 */
