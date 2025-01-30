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

  int a,b;
  bool v=false;
  cin>>a>>b;
  for(int i=a;i<=b;i++) {
    int a=i;
    bool flag=false;
    while(a>0) {
      int x=a%10;
      if(x!=7 && x!=4) {
        flag=true;
      }
      a/=10;
    }
    if(!flag) {
      cout<<i<<" ";
      v=true;
    }
  }

  if(!v) cout<<"-1";

  return 0;
}