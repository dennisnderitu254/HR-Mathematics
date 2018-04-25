// https://www.hackerrank.com/challenges/best-divisor/problem

#include <bits/stdc++.h>

using namespace std;

int sum_of_digits(int n) {
    int res = 0;
    while (n % 10) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    int max_sum = 1;
    int ans = 1;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            int tmp = n / i;
            if (sum_of_digits(i) > max_sum) {
                ans = i;
                max_sum = sum_of_digits(i);
            } else if (sum_of_digits(i) == max_sum) {
                ans = min(ans, i);
            }

            if (sum_of_digits(tmp) > max_sum) {
                ans = tmp;
                max_sum = sum_of_digits(tmp);
            } else if (sum_of_digits(tmp) == max_sum) {
                ans = min(ans, tmp);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

/*
 * iとn/iをまとめて調べるようにしたが，これをわけて
 * ループをn回にするほうがシンプルでよいような気がする。
 */
