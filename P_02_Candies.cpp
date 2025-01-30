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

  int n,a,b;
  cin>>n;

  int arr[n+3];

  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  cin>>a>>b;

  long long sum = 0;

  for(int i=a;i<=b;i++) {
    sum += arr[i];
  }

  cout<<sum<<endl;

  return 0;
}