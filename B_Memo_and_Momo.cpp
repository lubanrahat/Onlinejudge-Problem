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

  long long a,b,k;
  cin>>a>>b>>k;

  if(a%k==0 && b%k==0) {
    cout<<"Both\n";
  }else if(a%k==0 && b%k!=0) {
    cout<<"Memo\n";
  }else if(b%k==0 && a%k!=0) {
    cout<<"Momo\n";
  }else if(a%k!=0 && b%k!=0) {
    cout<<"No One\n";
  }

  return 0;
}