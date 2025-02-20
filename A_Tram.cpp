/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 11:09:29 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int capacity = 0;
    int max_capacity = INT_MIN;
    while(n--) {
        int exit,enters;
        cin >> exit >> enters;
        capacity += enters;
        capacity -= exit;
        max_capacity = max(max_capacity,capacity);
    }
    cout << max_capacity << endl;

    return 0;
}