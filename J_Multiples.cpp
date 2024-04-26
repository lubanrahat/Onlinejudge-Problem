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

// codeforces.com

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int a,b;
  cin>>a>>b;

  if(a%b==0) {
    cout<<"Multiples\n";
  }else if(b%a==0) {
    cout<<"Multiples\n";
  }else {
    cout<<"No Multiples\n";
  }

  return 0;
}