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

  int k,n,w;
  cin>>k>>n>>w;
  int sum = w*(w+1)/2;
  if((k*sum-n) < 1) {
    cout<<"0\n";
  }else {
    cout<<(k*sum)-n<<endl;
  }

  return 0;
}