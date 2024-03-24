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

  vector<long long> number;
  long long n;
  while(cin>>n) {
    number.push_back(n);
  }

  for(int i=number.size()-1;i>=0;i--) {
    double nek=sqrt(number[i]);
    cout<<fixed<<setprecision(4)<<nek<<'\n';
  }

  return 0;
}