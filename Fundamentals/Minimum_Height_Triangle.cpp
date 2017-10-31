#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int b, a;
    cin >> b >> a;
    cout << 2 * a / b + bool((2 * a) % b) << endl;
    return 0;
}
