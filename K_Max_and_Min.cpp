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

  int a,b,c,max,min;
  cin>>a>>b>>c;

  if(a>b) {
    if(a>c) {
      max=a;
    }else {
      max=c;
    }
  }else {
    if(b>c) {
      max=b;
    }else {
      max = c;
    }
  }

   if(a<b) {
    if(a<c) {
      min=a;
    }else {
      min=c;
    }
  }else {
    if(b<c) {
      min=b;
    }else {
      min = c;
    }
  }

  cout<<min<<" "<<max<<endl;

  return 0;
}