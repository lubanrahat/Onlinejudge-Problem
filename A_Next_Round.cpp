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
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  int kValue = arr[k-1],count = 0;
  for(int i=0;i<n;i++) {
    if(arr[i]>=kValue&&arr[i]!=0) {
      count++;
    }
  }
  cout<<count<<endl;

  return 0;
}