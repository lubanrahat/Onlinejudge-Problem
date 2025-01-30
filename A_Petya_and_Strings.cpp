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

  char a[1001],b[1001];
  cin>>a>>b;
  int i=0;
  while(1) {
    if(a[i]>='A'&&a[i]<='Z') a[i]=char(towlower(a[i]));
    if(b[i]>='A'&&b[i]<='Z') b[i]=char(towlower(b[i]));
    if(a[i]=='\0'&&b[i]=='\0') {
      cout<<"0\n";
      break;
    }else if(a[i]=='\0') {
      cout<<"-1\n";
      break;
    }else if(b[i]=='\0') {
      cout<<"1\n";
      break;
    }
    if(a[i]==b[i]) {
      i++;
    }else if(a[i]<b[i]) {
      cout<<"-1\n";
      break;
    }else {
      cout<<"1\n";
      break;
    }
  }

  return 0;
}