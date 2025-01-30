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

bool isPalindrome(int arr[],int n) {
  int start=0,end=n-1;
  while(start <= end) {
    if(arr[start] != arr[end]) {
      return false;
    }
    else {
      start++;
      end--;
    }
  }
  return true;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  long long n;
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++) 
    cin>>arr[i];

  if(isPalindrome(arr,n)) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }

  return 0;
}