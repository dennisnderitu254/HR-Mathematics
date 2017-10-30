#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    set<int> groupX, groupY;
    while (n--) {
        int x, y;
        cin >> x >> y;
        groupX.insert(x);
        groupY.insert(y);
    }

    if (groupX.size() == 1 || groupY.size() == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
