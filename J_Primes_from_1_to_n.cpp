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

bool isPrime(int n) {
  if(n<=1) return false;
  for(int i=2;i<n;i++) {
    if(n%i==0) {
      return false;
    }
  }
  return true;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  for(int i=2;i<n;i++) {
    if(isPrime(i)) {
      cout<<i<<" ";
    }
  }
  cout<<endl;

  return 0;
}