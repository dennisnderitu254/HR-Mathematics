// https://www.hackerrank.com/challenges/leonardo-and-prime/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<long long> lst;
    lst = {2, 6, 30, 210, 2310, 30030, 510510, 9699690,
           223092870, 6469693230, 200560490130, 7420738134810,
           304250263527210, 13082761331670030, 614889782588491410};

    int q;
    cin >> q;

    while (q--) {
        long long n;
        cin >> n;
        long long ans = upper_bound(lst.begin(), lst.end(), n) - lst.begin();
        cout << ans << endl;
    }
    return 0;
}

/*
 * 素数を小さい方から順にかけて得られる数で10^18以下のものを作る。
 * mathematicaで計算したところ，素数を15個使えることがわかった。
 * f[n_] := Product[Prime[i], {i, 1, n}];
 * In[]:= NestWhile[# + 1 &, 1, f[#] < 10^18 &] - 1
 * Out[]= 15
 *
 * 素数の個数の変わり目を計算。
 * In[]:= Table[f[i], {i, 1, 15}]
 * Out[]= {2, 6, 30, 210, 2310, 30030, 510510, 9699690,
 *         223092870, 6469693230, 200560490130, 7420738134810,
 *         304250263527210, 13082761331670030, 614889782588491410}
 */
