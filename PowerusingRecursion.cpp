#include <iostream>
using namespace std;

int power(int m,int n){
    if(n==0 || m==1){
        return 1;
    }
    else if(m==0){
        return 0;
    }
    else{
        return power(m,n-1)*m;
    }
    
}

int main(){
    int m,n;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<power(m,n);
    return 0;
}
