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

  int a1,b1,a2,b2;
  cin>>a1>>b1>>a2>>b2;

  if(max(a1,a2)>min(b1,b2)) {
    cout<<-1;
  }else {
    cout<<max(a1,a2)<<" "<<min(b1,b2);
  }

  return 0;
}