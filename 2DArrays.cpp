#include <iostream>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    cout<<"A "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    B[0][0]=1;
    B[0][1]=2;
    B[0][2]=3;
    B[0][3]=4;
    B[1][0]=5;
    B[1][1]=6;
    B[1][2]=7;
    B[1][3]=8;
    B[2][0]=9;
    B[2][1]=10;
    B[2][2]=11;
    B[2][3]=12;
    
    
    cout<<"B "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int **C;
    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    
    C[0][0]=1;
    C[0][1]=2;
    C[0][2]=3;
    C[0][3]=4;
    C[1][0]=5;
    C[1][1]=6;
    C[1][2]=7;
    C[1][3]=8;
    C[2][0]=9;
    C[2][1]=10;
    C[2][2]=11;
    C[2][3]=12;
    
    
    cout<<"C "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
    
    
}
