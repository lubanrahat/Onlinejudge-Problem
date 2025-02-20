/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-18 12:26:02 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (true) {
        n++;
        int a = n / 1000;         
        int b = (n / 100) % 10;
        int c = (n / 10) % 10; 
        int d = n % 10; 

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }
    }
    cout << n << endl;

    return 0;
}