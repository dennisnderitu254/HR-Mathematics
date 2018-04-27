// https://www.hackerrank.com/challenges/possible-path/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        if (__gcd(a, b) == __gcd(x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*
 * ユークリッドの互除法。最大公約数をdとして
 * (a,b)->(d,d)のような変形が可能なので，
 * (a,b)=(x,y)が成立するかどうか調べればいい。
 */

