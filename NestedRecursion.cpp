#include <iostream>
using namespace std;
//Nested recursion
int func(int n){
    if(n>100){
        return n-10;
    }
    else{
        return func(func(n+11));
    }
    return 0;
}

int main(){
    int n=95;
    cout<<func(n)<<endl;
    return 0;
}
