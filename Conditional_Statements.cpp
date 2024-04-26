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

  switch (n)
  {
  case 1:
    cout<<"one"<<endl;
    break;
  case 2:
    cout<<"two"<<endl;
    break;
  case 3:
     cout<<"three"<<endl;
     break;
  case 4:
    cout<<"four"<<endl;
    break;   
  case 5:
    cout<<"five"<<endl;
    break;
  case 6:
    cout<<"six"<<endl;
    break;   
  case 7:
    cout<<"seven"<<endl;
    break;
  case 8:
    cout<<"eight"<<endl;
    break;  
  case 9:
    cout<<"nine"<<endl;
    break;       
  
  default:
    cout<<"Greater than 9\n";
    break;
  }

  return 0;
}