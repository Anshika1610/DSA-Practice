#include <iostream>
using namespace std;
int func(int n){
    if(n>0){
        printf("%d ",n);
        func(n-1);  //Tree recursion
        func(n-1);  //Tree recursion
    }
    return 0;
}
 
int main(){
    int n=3;
    func(n);
    return 0;
}
