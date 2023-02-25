#include <iostream>
using namespace std;
//Indirect recursion
int funcB(int n);
int funcA(int n){
    if(n>0){
        printf("%d ",n);
        funcB(n/2);
    }
    return 0;
}
int funcB(int n){
    if(n>0){
        printf("%d ",n);
        funcA(n/2);
    }
    return 0;
}
 
int main(){
    int n=40;
    funcA(n);
    return 0;
}
