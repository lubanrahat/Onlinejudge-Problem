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

  int n;
  long long ll;
  char ch;
  float f;
  double d;
  cin>>n>>ll>>ch>>f>>d;

  cout<<n<<endl;
  cout<<ll<<endl;
  cout<<ch<<endl;
  cout<<fixed<<setprecision(3)<<f<<endl;
  cout<<fixed<<setprecision(9)<<d<<endl;

  return 0;
}