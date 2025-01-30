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

  string lave = "codeforces";

  while(tt--) {
    string S;
    cin>>S;

    int cnt = 0;

    for(int i=0;i<S.size();i++) {
      if(S[i]!=lave[i]) {
        cnt++;
      }
    }

    cout<<cnt<<endl;

  }

  return 0;
}