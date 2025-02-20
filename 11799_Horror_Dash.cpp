/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 15:03:06 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_speed = 0;
        for(int i = 0; i < n; i++) {
            max_speed = max(max_speed,a[i]);
        }
        cout << "Case " << i << ": " << max_speed << endl;
    }

    return 0;
}