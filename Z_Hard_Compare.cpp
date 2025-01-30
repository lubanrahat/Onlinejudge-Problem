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

  long long n1,pow1,n2,pow2,num1,num2;
  cin>>n1>>pow1>>n2>>pow2;

  if(pow1*log(n1)>pow2*log(n2)) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }
  return 0;
}