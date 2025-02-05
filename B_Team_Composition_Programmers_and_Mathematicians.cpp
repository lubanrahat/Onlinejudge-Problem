/**
 *    Author:  Luban Rahat
 *    Created: 2025-02-06 00:44:54 (GMT+06:00)
 **/
#include <bits/stdc++.h>
using namespace std;

// Loop macros for convenience
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); ++it)
// Commonly used macros for ease
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define read(v) for(auto &x : v) cin >> x; // Read values into a vector
#define debug(x) cerr << #x << " = " << (x) << endl; // Debug macro to print variable names and values
#define endl '\n'  // Use endl for faster new lines in some cases
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) // Fast IO setup
// Type definitions for commonly used data structures
typedef vector<int> VI;
typedef basic_string<int> BI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
// Random number generator setup
mt19937 mrand(random_device{}()); 
const ll mod=1000000007; // Modulus for calculations
const int INF = 1e9; // Infinity value for integers
const ll LINF = 1e18; // Infinity value for long longs
const db EPS = 1e-9; // Epsilon value for floating-point comparisons
// Function to print a vector
template <typename T> 
inline void print(vector<T> &v) {
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
// Function to print a 2D vector
template <typename T> 
inline void print2D(vector<vector<T>> &v) {
    for (auto &row : v) print(row);
}
// Main solve function
inline void solve() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        $1
    }
}

int32_t main() {
    fastio; // Initialize fast input/output

    solve(); // Call solve function

    return 0; // End of program
}
