#include <iostream>
using namespace std;
//In both static and global declaration, the value of x is same for both 
int x=0;  //Global declaration
int func(int n){
    //static int x=0;  //Static declaration
    if(n>0){
        x++;
        return func(n-1)+x;
    }
    return 0;
}
int new_func(int n){
    if(n>0){
        x++;
        return new_func(n-1)+x;
    }
    return 0;
}

int main(){
    int n=5;
    cout<<func(n)<<endl;
    cout<<new_func(n)<<endl;
    return 0;
}
