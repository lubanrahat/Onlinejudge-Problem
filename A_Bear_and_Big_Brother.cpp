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
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int a,b,year=0;
  cin>>a>>b;
  while(a<=b) {
    a*=3;
    b*=2;
    year++;
  }
  cout<<year<<endl;

  return 0;
}