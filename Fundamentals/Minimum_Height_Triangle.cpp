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
 * ’ê•ÓbC‚‚³h‚ÌOŠpŒ`‚Ì–ÊÏ‚ªa‚Ì‚Æ‚«
 * b*h/2>=a ˆh>=2*a/b ˆh=ceil(2*a/b)
 */
