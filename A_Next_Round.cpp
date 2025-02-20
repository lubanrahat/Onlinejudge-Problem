/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 15:36:01 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0,kValue = a[k-1];
    for(int i = 0; i < n; i++) {
        if(a[i] >= kValue && a[i] != 0) {
            count++;
        }
    }
    cout << count << endl;


    return 0;
}