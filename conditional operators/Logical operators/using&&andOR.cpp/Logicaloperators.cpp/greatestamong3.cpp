#include <iostream>
using namespace std;
int main(){
  int num1, num2, num3, greatest;
  cout<<"Enter number first : ";
  cin>>num1;
  cout<<"Enter number second : ";
  cin>>num2;
  cout<<"Enter number third : ";
  cin>>num3;
  greatest = num1;
  if(num2>num1){
    greatest = num2;
    cout<<"number first  is greatest : "<<greatest<<endl;
  }
  if(num3>num2){
    greatest = num3;
    cout<<"Number third is greatest : "<<greatest<<endl;
  
  }
  else{
    cout<<"Number first is greatest : "<<greatest<<endl;
  }

  return 0;
}