#include <iostream>
using namespace std;
int main(){
   int a, b, c;
   cin>>a>>b>>c;

  for(int i =1; i<=a; i++){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }

    cout<<endl;
  }
  for(int i =1; i<=b; i++){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }

    cout<<endl;
  }
  for(int i =1; i<=c; i++){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }

    cout<<endl;
  }
  return 0;
}