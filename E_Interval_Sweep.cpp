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

  if(a-b==1 || b-a==1 || (a==b && a!=0 && b!=0)) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }
  return 0;
}