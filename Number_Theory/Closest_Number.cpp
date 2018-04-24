// https://www.hackerrank.com/challenges/closest-number/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;

        auto ab = (long long) pow(a, b);
        auto k = ab / x;

        long long ans = k * x;
        if ((ab % x) * 2 >= x) {
            ans += x;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
 * a^bをはさむxの倍数をkx, (k+1)xとおく。
 * kx <= a^b < (k+1)x
 * これをみたすkは
 * k=floor((a^b)/x)
 *
 * 「最も近い」はmod(a^b,x)とx/2の大小で判定できる。
 * mod(a^b,x) < x/2 のとき ans=kx
 * mod(a^b,x) >= x/2 のとき ans=(k+1)x
 */
