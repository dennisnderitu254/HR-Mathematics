// https://www.hackerrank.com/challenges/lowest-triangle/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, a;
    cin >> b >> a;
    cout << (2 * a + b - 1) / b << endl;
    return 0;
}

/*
 * ęÓbCłhĚOp`ĚĘĎŞaĚĆŤ
 * b*h/2>=a h>=2*a/b h=ceil(2*a/b)
 */
