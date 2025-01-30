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

void rotate_temp_left(int *arr,int n,int d) {
  int j = 0,temp[n];
  for(int i=d;i<n;i++)
    temp[j]=arr[i];
  for(int i=0;i<d;i++) 
    temp[j]=arr[i];
  for(int i=0;i<n;i++)
    arr[i]=temp[i];    
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  while(cin>>n) {
    if(n == 1999) {
      cout<<"Correct\n";
      break;
    }else {
      cout<<"Wrong\n";
    }
  }

  return 0;
}