#include <iostream>
using namespace std;
int main(){
  int sub1, sub2, sub3, sub4, sub5;
  float percentage;
  cout<<"Enter the marks of subject first : ";
  cin>>sub1;
  cout<<"Enter the marks of subject second : ";
  cin>>sub2;
  cout<<"Enter the marks of subject third : ";
  cin>>sub3;
  cout<<"Enter the marks of subject fourth : ";
  cin>>sub4;

  cout<<"Enter the marks of subject fifth : ";
  cin>>sub5;5;
  percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
  cout<<"Your total percentage is : "<<percentage<<endl;
  if(percentage>=91 && percentage<=100){
    cout<<"Excellent";
  }
  else if(percentage>=81 && percentage<=90){
    cout<<"very good";

  }
  else if(percentage>=71 && percentage<=80){
    cout<<"Good";
  }
  else if(percentage>=61 && percentage<=70){
  cout<<"can do better";
  }
  else if(percentage>=51 && percentage>=60){
    cout<<"Average";
  }
  else if(percentage>=41 && percentage>=50){
    cout<<"Below average ";
  }
  else{ 
    cout<<"Fail";
  }
  
  return 0;
}