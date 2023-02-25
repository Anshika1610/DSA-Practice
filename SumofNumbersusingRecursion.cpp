#include <iostream>
using namespace std;
int sumofnumbers=0;
int sum(int n){
    if(n>0){
        sumofnumbers+=n;
        sum(n-1);
    }
    return sumofnumbers;
}

int main(){
    int n =5;
    cout<<sum(n);
    return 0;
}
