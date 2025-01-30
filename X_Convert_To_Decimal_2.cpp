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

  int tt;
  cin>>tt;
  while(tt--) {
    int n,count=0;
    cin>>n;
    long long sum=0;
    while(n>0) {
      if(n%2==1) count++;
      n/=2;
    }
    for(int i=0;i<count;i++) {
      sum+=pow(2,i);
    }
    cout<<sum<<endl;
  }

  return 0;
}