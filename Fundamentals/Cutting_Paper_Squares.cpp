// https://www.hackerrank.com/challenges/p1-paper-cutting/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    cout << m * n - 1 << endl;
    return 0;
}

/*
 * 縦m，横nだとする。
 * まず横にm-1回切る。m個の紙片になる。
 * 各紙片をn-1回ずつ切ればいいので
 * m-1+m(n-1)=mn-1
 */
