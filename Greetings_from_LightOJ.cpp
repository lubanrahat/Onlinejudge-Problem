#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
using namespace std;

int sum(int a,int b) {
  return a+b;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int tt;
  cin>>tt;

  for(int testCase=1;testCase<=tt;testCase++) {
    int a,b;
    cin>>a>>b;

    cout<<"Case "<<testCase<<": "<<sum(a,b)<<'\n';
  }

  return 0;
}