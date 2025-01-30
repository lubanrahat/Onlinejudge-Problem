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

  int a,b,c;
  char ch1,ch2;
  cin>>a>>ch1>>b>>ch2>>c;

  switch (ch1) {
  case  '+':
    if(a+b==c) {
      printf("Yes\n");
    }else {
      printf("%d\n",a+b);
    }
    break;
  case  '-':
    if(a-b==c) {
      printf("Yes\n");
    }else {
      printf("%d\n",a-b);
    }
    break;  
  case  '*':
    if(a*b==c) {
      printf("Yes\n");
    }else {
      printf("%d\n",a*b);
    }
    break;  
  
  default:
    break;
  }

  return 0;
}