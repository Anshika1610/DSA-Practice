#include <iostream>
using namespace std;

void func(int n){
    if(n>0){
        printf("%d ",n);  // printf on call time
        func(n-1);  //Tail recursion 
    }
}

int main(){
    int x=3;
    func(x);
    return 0;
}
