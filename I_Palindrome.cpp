#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  string a,b;
  cin>>a;
  for(int i=a.size()-1;i>=0;i--) {
    b+=a[i];
  }
  int a1,b2;
  a1=stoi(a);
  b2=stoi(b);

  cout<<b2<<endl;
  if(a1==b2) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }

  return 0;
}