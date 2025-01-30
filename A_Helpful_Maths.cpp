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
  if(s.size()<=1) {
    cout<<s<<endl;
  }else {
    for(int i=0;i<s.size();i++) {
      for(int j=i+1;j<s.size();j++) {
        if(s[i]=='+'||s[j]=='+') {
          continue;
        }else {
          if(s[i]>s[j]) {
            swap(s[i],s[j]);
          }
        }
      }
    }
    cout<<s<<endl;
  }

  return 0;
}