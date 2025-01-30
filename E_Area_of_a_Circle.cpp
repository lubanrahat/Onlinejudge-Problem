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

  double R,area;
  cin>>R;

  double pi=3.141592653;
  area=pi*R*R;
  cout<<fixed<<setprecision(9)<<area<<'\n';

  return 0;
}