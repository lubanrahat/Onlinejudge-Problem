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

  int k,s,count=0;
  cin>>k>>s;

  for(int x=0;x<=k;x++) {
    for(int y=0;y<=k;y++) {
      int z=s-x-y;
      if(z>=0 && z<=k) {
        count++;
      }
    }
  }

  cout<<count<<endl;

  return 0;
}