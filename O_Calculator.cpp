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

  int n1,n2;
  char ops;
  cin>>n1>>ops>>n2;

  switch (ops) {
    case '+':
      cout<<n1+n2<<endl;
      break;

    case '-':
      cout<<n1-n2<<endl;
      break;
    case '/':
      cout<<n1/n2<<endl;
      break;
    case '*':
      cout<<n1*n2<<endl;   
      break; 

    default:
      break;
  }

  return 0;
}