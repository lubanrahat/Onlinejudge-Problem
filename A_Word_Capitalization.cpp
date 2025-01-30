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

  string s;
  cin>>s;
  if(s[0]>='a' && s[0]<='z') {
    s[0] = char(toupper(s[0]));
  }
  cout<<s<<endl;

  return 0;
}