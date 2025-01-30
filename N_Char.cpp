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

  char ch;
  cin>>ch;

  if(ch>='A' && ch<='Z') {
    ch=ch-('A'-'a');
  }else {
    ch=ch+('A'-'a');
  }

  cout<<ch<<endl;

  return 0;
}