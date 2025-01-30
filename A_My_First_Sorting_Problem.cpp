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

  int tt;
  cin>>tt;
  while(tt--) {
    int x,y;
    cin>>x>>y;

    if(x>y) {
      swap(x,y);
    }
    cout<<x<<" "<<y<<endl;
  }

  return 0;
}