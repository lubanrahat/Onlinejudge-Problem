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

  double n,k,a;
  cin>>n>>k>>a;

  double result=(n*k)/a;
  long long num=result;
  double myResult=result-num;
  if(myResult>0) {
    cout<<"double\n";
  }else if(num<=2147483647) {
    cout<<"int\n";
  }else {
    cout<<"long long\n";
  }

  return 0;
}