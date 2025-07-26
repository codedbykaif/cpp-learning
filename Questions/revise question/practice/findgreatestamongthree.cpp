#include <iostream>
using namespace std;
int main (){
 int a,b,c;
 cout<<"Enter the first number :";
 cin>>a;
  cout<<"Enter the second number :";
  cin>>b;
   cout<<"Enter the third number :";
   cin>>c;
   int greatest = a;
   if(b>a) cout<<"second number is greatest: "<<b;
   if(c>b) cout<<"third number is greatest: "<<c;
   else cout<<"first number is greatest: "<<a;

  return 0;
}