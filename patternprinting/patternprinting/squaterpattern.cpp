#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows :";
  cin>>n;
  int m;
  cout<<"Enter number of colums :";
  cin>>m;
  for(int i =1; i<=n; i++ ){
    for(int i=1; i<=m; i++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}