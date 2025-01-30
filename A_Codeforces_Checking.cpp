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
    char ch;
    cin>>ch;
    string code = "codeforces";
    bool found = false;
    for(char i:code) {
      if(ch == i) {
        found = true;
        break;
      }
    }
    cout<<(found ? "YES":"NO")<<endl;
  }

  return 0;
}