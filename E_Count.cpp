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

  string S;
  cin>>S;

  stringstream ss(S);
  int n,sum = 0;
  ss >> n;

  while(n!=0) {
    int digit = n%10;
    sum += digit;
    n/=10;
  }

  cout<<sum;

  return 0;
}