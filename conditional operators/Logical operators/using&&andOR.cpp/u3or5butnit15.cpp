#include <iostream>
using namespace std;
int main (){
  int n;
  cout<<"Enter the number to check ";
  cin>>n;
  if((n%3==0 || n%5==0) && n%15!=0){
    cout<<"the number satisfies the given condition ";
  }
  else{
    cout<<"the number does not satisfies the condition";
  }
  return 0;
}