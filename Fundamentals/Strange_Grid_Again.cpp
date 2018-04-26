// https://www.hackerrank.com/challenges/strange-grid/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long r, c;
    cin >> r >> c;

    long long a = 2 * c - 1 - r % 2;
    long long ans = a + 10 * ((r + 1) / 2 - 1);
    cout << ans << endl;
    return 0;
}

/*
 * 第r行第c列の数をf(r,c)であらわす。
 * f(6,3)=25となるのは
 * f(2n,3)=5+10(n-1)
 * だから。同様に考えると
 * f(2n-1,3)=4+10(n-1)
 * などが言える。公差はすべて10。初項のみ違う。
 */
