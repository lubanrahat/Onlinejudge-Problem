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

  float x,y;
  cin>>x>>y;

  if(x>0 && y>0) cout<<"Q1";
  else if(x<0 && y>0) cout<<"Q2";
  else if(x<0 && y<0) cout<<"Q3";
  else if(x>0 && y<0) cout<<"Q4";
  else if(x==0 && y==0) cout<<"Origem";
  else if(x==0 && y) cout<<"Eixo Y";
  else if(x && y==0) cout<<"Eixo X";

  return 0;
}