#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int a =2; //first term of the GP
  for(int i=1; i<=n; i++){
     cout<<a<<" ";
     a *=2;
  }
  return 0;
}