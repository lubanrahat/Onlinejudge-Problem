/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 15:29:12 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) count++;
        }
    }
    cout << count << endl;

    return 0;
}