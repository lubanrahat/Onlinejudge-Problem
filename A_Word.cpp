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
  int uppwe=0,lower=0;
  for(int i=0;i<s.size();i++) {
    if(s[i]>'A'&&s[i]<='Z') {
      uppwe++;
    }else {
      lower++;
    }
  }
  
  

  return 0;
}