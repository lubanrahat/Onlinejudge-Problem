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

  double a,b;
  cin>>a>>b;

  int t=100-a;
  double x=(100*b)/t;
  cout<<fixed<<setprecision(2)<<x<<endl;

  return 0;
}