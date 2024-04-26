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
  cin>>n;

  long long factorials=1;
  for(int i =1;i<=n;i++) {
    factorials*=i;
  }
  cout<<factorials<<endl;

  return 0;
}