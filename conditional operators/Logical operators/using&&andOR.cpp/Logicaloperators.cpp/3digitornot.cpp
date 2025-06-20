#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number to check : ";
  cin>>n;
  if(n>99 && n<1001){
    cout<<"The number is 3 digit number : ";
  }

  else{
    cout<<"the number is not 3 digit number";
  }
  return 0;
}