#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number :";
  cin>>num;
  int product =1;
  for(int i=1;i<=num;i++){
    product *=i;
  }
  cout<<"the factorial of given number is : "<<product<<endl;
  return 0;
}