#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int checke : b) {
        auto lower = lower_bound(a.begin(), a.end(), checke);
        auto upper = upper_bound(a.begin(), a.end(), checke);

        int floorVal = -1;
        int ceilVal = -1;

        if (lower != a.begin()) {
            floorVal = *(lower - 1);
        }

        if (upper != a.end()) {
            ceilVal = *upper;
        }

        if (floorVal == -1 && ceilVal == -1) {
            cout << "X X" << endl;
        } else if (floorVal == -1) {
            cout << "X " << ceilVal << endl;
        } else if (ceilVal == -1) {
            cout << floorVal << " X" << endl;
        } else {
            cout << floorVal << " " << ceilVal << endl;
        }
    }

    return 0;
}


/*


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());  

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int checke : b) {
        int floorVal = -1, ceilVal = -1;

        for (int i = 0; i < n; ++i) {
            if (a[i] <= checke) {
                floorVal = a[i];  
            }
            if (a[i] >= checke && ceilVal == -1) {
                ceilVal = a[i]; 
            }
        }

        if (floorVal == -1 && ceilVal == -1) {
            cout << "X X" << endl;
        } else if (floorVal == -1) {
            cout << "X " << ceilVal << endl;
        } else if (ceilVal == -1) {
            cout << floorVal << " X" << endl;
        } else {
            cout << floorVal << " " << ceilVal << endl;
        }
    }

    return 0;
}


*/