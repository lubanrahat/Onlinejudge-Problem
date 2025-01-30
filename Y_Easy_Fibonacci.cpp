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

  int n,t1=0,t2=1,nextTrem=0;
  cin>>n;

  for(int i=1;i<=n;i++) {
    if(i==1) {
      cout<<t1<<" ";
      continue;
    }
    if(i==2) {
      cout<<t2<<" ";
      continue;
    }
    nextTrem=t1+t2;
    t1=t2;
    t2=nextTrem;
    cout<<nextTrem<<" ";
  }

  return 0;
}