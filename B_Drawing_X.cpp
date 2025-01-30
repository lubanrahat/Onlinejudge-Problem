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

  char arr[n][n];
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      arr[i][j]='*';
    }
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i==j) {
        arr[i][j]='\\';
      }
      if(i+j==n-1) {
        arr[i][j]='/';
      }
    }
  }

  int x = n/2;
  arr[x][x]='X';

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cout<<arr[i][j];
    }
    cout<<endl;
  }

  return 0;
}