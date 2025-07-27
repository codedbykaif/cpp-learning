#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number to chcek ";
  cin>>n;
  if(n>99 && n<1001){
    cout<<"The number is three digit number ";
  }
  else cout<<"The number is not three digit number";
  return 0;
}