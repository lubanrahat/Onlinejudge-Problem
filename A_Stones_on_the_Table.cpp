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
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n,cnt=0;
  cin>>n;
  char s[1001];
  cin>>s;
  for(int i=0;i<n;i++) {
    if(s[i]==s[i+1]) {
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}