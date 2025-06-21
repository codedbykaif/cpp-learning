#include <iostream>
using namespace std;
int main (){
int x;
cout<<"Enter the no of day : ";
cin>>x;
switch(x){
  case 1 :
  cout<<"Monday";

  case 2 :
  cout<<"Tuesday";

  case 3 :
  cout<<"Wednesday";
  break;

  case 4 :
  cout<<"Thursday";
break;
  case 5 :
  cout<<"Friday";
  break;
  case 6 :
  cout<<"Saturday";
break;
  case 7 :
  cout<<"Sunday";
break;
default :
cout<<"invalid";
}

  return 0;
}