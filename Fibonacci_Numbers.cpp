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

int fib(int n) {
  int a=0,b=1,c;
  if(n==0)
    return a;
  for(int i=2;i<=n;i++) {
    c=a+b;
    a=b;
    b=c;
  }  
  return b;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  cout<<fib(n)<<endl;

  return 0;
}