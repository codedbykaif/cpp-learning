#include <iostream>
using namespace std;
int main(){
  int cp, sp, profit, loss;
  cout<<"Enter the cost price : ";
  cin>>cp;
  cout<<"enter the selling price : ";
  cin>>sp;
  if(sp>cp){
    cout<<"profit : ";
    profit = sp-cp;
    cout<<profit;
  }
  if(cp>sp){
    cout<<"Loss : ";
    loss = cp - sp;
    cout<<loss;
  }
  if (sp==cp){
    cout<<"no profit no loss";
  }
  return 0;
}