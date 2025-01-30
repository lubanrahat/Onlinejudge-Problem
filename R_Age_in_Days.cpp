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

  int n;
  cin>>n;
  int x=n/365;
  cout<<x<<" years"<<endl;
  int a=n-(365*x);
  int y=a/30;
  cout<<y<<" months"<<endl;
  int b=a-(y*30);
  cout<<b<<" days"<<endl;

  return 0;
}