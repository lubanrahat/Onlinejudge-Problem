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
    int n;
    cin>>n;
    do {
      int digitofTheNumbers = n%10;
      cout<<digitofTheNumbers<<" ";
      n/=10;
    }while(n!=0);
    cout<<endl;
  }

  return 0;
}
