#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef basic_string<int> BI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin>>a>>b;

    if(a > b) {
        cout<<"0"<<endl;
    } else {
        cout<<b-a+1<<endl;
    }

    return 0;
}