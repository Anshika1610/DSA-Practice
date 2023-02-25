#include <iostream>
using namespace std;

int sum(int n){
  if(n==0){
    return 0;
  }
  else if(n>0){
    return sum(n-1)+n;
  }
  return 0;
}
int main(){
  int n=5;
  cout<<sum(n);
  return 0;
}
