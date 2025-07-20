#include <iostream>
using namespace std;
int main(){
int n, rev = 0, lastDigit = 0;
cout<<"Enter the number : ";
cin>>n;
while(n>0){
  lastDigit = n%10;
  rev*=10;
  rev +=lastDigit;
  n/=10;
}
cout<<rev;
  return 0;
}