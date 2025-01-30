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

  string firstName1,secondName1;
  string firstName2,secondName2;

  cin>>firstName1>>secondName1>>firstName2>>secondName2;

  if(secondName1==secondName2) {
    cout<<"ARE Brothers\n";
  }else {
    cout<<"NOT\n";
  }

  return 0;
}