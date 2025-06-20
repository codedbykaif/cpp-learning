#include <iostream>
using namespace std;
int main(){ 
  int a,b,c;
  cout<<"enter the sides";
 cin>> a >> b >> c;
 if(a+b>c && b+c>a && a+c>b){
  cout<<"yes the sides forms a triangle : "<<endl;
 }
 else{
  cout<<"The sides does not forms a triangle :"<<endl;
 }



  return 0;
}