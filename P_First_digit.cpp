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

  while(n >= 10) {
    n/=10;
  }
  
  
  if(n%2==0) 
    cout<<"EVEN\n";
  else
    cout<<"ODD\n";  

  return 0;
}