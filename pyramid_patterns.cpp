#include<iostream>
using namespace std;
int main (){
    //outer loop
    int n = 8;
    for(int i=0; i<n; i++){
        //spcaes
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //numbers n+1
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        //nums 2
        for(int j=i; j>0; j--){
             cout<<j;
        }

        cout<<endl;
    }
    return 0;
}