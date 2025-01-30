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

  string s;
  cin>>s;
  int n = s.size();

  int count[26] = {0},odd_even=0;
  
  for(int i=0;i<n;i++) {
    count[int(s[i]-97)]++;
  }
  for(int i=0;i<26;i++) {
    if(count[i]==1)
     odd_even+=count[i];
    else if(count[i]>1) {
      odd_even+=1;
    } 
  }

  if(odd_even%2==0) {
    cout<<"CHAT WITH HER!\n";
  }else {
    cout<<"IGNORE HIM!\n";
  }
  

  return 0;
}