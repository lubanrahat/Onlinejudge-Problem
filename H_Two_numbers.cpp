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

  cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<'\n';
  cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<'\n';
  cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<'\n';

  return 0;
}