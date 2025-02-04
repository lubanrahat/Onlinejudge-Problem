#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define tr(it,a) for (auto it=a.begin();it!=a.end();++it)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
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

    int n;
    cin>>n;
    map<pair<string,string>,bool> mp;
    for(int i = 0; i < n; i++) {
        string a,b;
        cin>>a>>b;
        mp[{a,b}] = true;
    }
    cout<<mp.size()<<endl;

    return 0;
}