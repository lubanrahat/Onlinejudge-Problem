/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 15:07:31 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        cout << (a[n-1] - a[0]) * 2 << endl;
    }

    return 0;
}