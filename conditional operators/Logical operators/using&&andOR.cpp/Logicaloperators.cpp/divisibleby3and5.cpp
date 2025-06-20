#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number to check";
  cin>>n;
  if(n%3==0 || n%5==0){
    cout<<"The number is divisible by  3 or 5";

  }
  else{
    cout<<"The number is not divisible by 3 or 5";
  }
  return 0;
}