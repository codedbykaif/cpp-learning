#include <iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter the value to find absolue value";
  cin>>x;
  if(x<0){
    x = -x;

  }
  cout<<"Absolue valuee : " << x <<endl;

  return 0;
}