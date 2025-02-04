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

void solve() {
    int n;
    cin>>n;
    VI a(n);
    rep(i,0,n) cin>>a[i];
    int left=0,right-1,target,answer-1;
    cin>>target;
    while(left<=right) {
        int mid=left+(right-left)/2;
        if(a[mid]==target) {
            answer=mid;
            break;
        } else if(a[mid]<target) {
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    if(answer!=-1) {
        cout<<target<<" is found "<<answer<<" index!"<<endl;
    } else {
        cout<<target<<" is not found!"<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    bool found = false;
    for(int i=a;i<=b;++i) {
        if(i%c==0) {
            cout<<i<<endl;
            found=true;
            break;
        } 
    }

    if(!found) {
        cout<<-1<<endl;
    }

    return 0;
}