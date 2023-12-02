#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, r1 = 0, r2 = 0, c = 1;
    cin >> n;
    vector<int> v, pi, qi;

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        pi.push_back(p);
    }

    for(int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        qi.push_back(q);
    }

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    while(next_permutation(v.begin(),v.end()))
    {
        if(v == pi)
            r1 = c;
        if(v == qi)
            r2 = c;

        c++;
    }

    cout << abs(r1 - r2) << "\n";

    return 0;
}