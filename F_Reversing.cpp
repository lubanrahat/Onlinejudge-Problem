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

void reverseArray(int *arr,int n) {
  int start=0,end=n-1;
  while(start<=end) {
    swap(arr[start++],arr[end--]);
  }
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  int arr[1000000];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  reverseArray(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<'\n';  

  return 0;
}