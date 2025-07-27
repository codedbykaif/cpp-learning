#include <iostream>
using namespace std;
int main(){
  // to check whether the input integer is side of a triangle or not
  int a,b,c;
  cout<<"Enter the sides of triangle: ";
  cin>>a>>b>>c;
  if(a+b>c && a+c>b && b+c>a)
  cout<<"The sides can form a triangle  ";
  else cout<<"The side cannot form a triangle";

  return 0;
}