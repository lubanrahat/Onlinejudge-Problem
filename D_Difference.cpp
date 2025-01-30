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

  long long a,b,c,d,answer;
  cin>>a>>b>>c>>d;

  answer=(a*b)-(c*d);

  cout<<"Difference = "<<answer<<'\n';

  return 0;
}