#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
   cin>>n;
  // number of stars = n + 1 - i 
  // where,   i = number of rows, 
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){
      cout<<"*";
    }
    cout<<endl; }
  return 0;
}