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

  double n;
  cin>>n;
  int x = n;
  if(x==n) {
    cout<<"int "<<x<<'\n';
  }else {
    cout<<"float "<<x<<" "<<n-x<<endl;
  }

  return 0;
}