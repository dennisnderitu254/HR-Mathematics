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
 * �cm�C��n���Ƃ���B
 * �܂�����m-1��؂�Bm�̎��ЂɂȂ�B
 * �e���Ђ�n-1�񂸂؂�΂����̂�
 * m-1+m(n-1)=mn-1
 */
