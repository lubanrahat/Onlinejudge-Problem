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

  int arr[1000000];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++) {
    if(arr[i]>0) arr[i]=1;
    if(arr[i]<0) arr[i]=2;
  }  
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<"\n";  

  return 0;
}