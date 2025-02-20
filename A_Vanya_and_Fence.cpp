/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 09:13:10 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minwidthrode = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] <= h) {
            minwidthrode += 1;
        } else {
            minwidthrode += 2;
        }
    }
    cout << minwidthrode << endl;

    return 0;
}