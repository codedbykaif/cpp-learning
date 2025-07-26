#include <iostream>
using namespace std;
int main (){
  int a;
  for(int k=1; k<=3; k++){
    cin>>a;
    for(int i=1; i<=a; i++){
      for(int j=1; j<=i; j++){
        cout<<"*";
      }
      cout<<endl;
    }
  }
  return 0;
}