#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int ncr(int n,int r){
    int num, den;
    if(r>n){
        return 0;
    }
    else if(n==r || r==0 || n==0 || n==1){
        return 1;
    }
    else{
        num=fact(n);
        den=fact(n-r)*fact(r);
        
        return (num/den);
    }
    
}
int NCR(int n, int r){
    if(n==r || r==0){
        return 1;
    }
    return NCR(n-1,r-1)+NCR(n-1,r);
}

int main()
{
    cout<<NCR(3,2);

    return 0;
}
