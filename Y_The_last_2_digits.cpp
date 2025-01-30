#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  long long a,b,c,d,m;
  cin>>a>>b>>c>>d;
  a%=100;
  b%=100;
  c%=100;
  d%=100;

  m = (a*b*c*d)%100;

  if(m<10) {
    cout<<0<<m;
  }else {
    cout<<m;
  }

  return 0;
}