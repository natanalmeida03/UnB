#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r = 0;
    cin >> n;
    string s;

    cin >> s;

    for (int i = 0; i < n - 2; ++i) {
        if (s.substr(i, 3) == "ABC") {
            r++;
        }
    }
    
    cout << r << "\n";

    return 0;
}