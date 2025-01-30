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
  cin>>a>>b;

  if(a>=b) {
    cout<<"Yes\n";
  }else {
    cout<<"No\n";
  }

  return 0;
}