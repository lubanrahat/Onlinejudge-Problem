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

  long long x,y;
  cin>>x>>y;

  int summation,multiplication,subtraction;
  summation=x+y;
  multiplication=x*y;
  subtraction=x-y;

  cout<<x<<" + "<<y<<" = "<<summation<<'\n';
  cout<<x<<" * "<<y<<" = "<<multiplication<<'\n';
  cout<<x<<" - "<<y<<" = "<<subtraction<<'\n';

  return 0;
}