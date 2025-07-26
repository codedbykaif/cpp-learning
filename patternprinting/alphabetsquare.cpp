#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter nu0mber of rows :";
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=0; j<n; j++){
      char ch = 'A' + j;
      cout<<ch;
    }
    cout<<endl;
  }
  return 0;
}