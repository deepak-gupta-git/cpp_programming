#include<iostream>
using namespace std;
int main() {
    
    int n ;
    cout<<"Enter a number : "; 
    cin>>n;

    
    int i = 1;

    while ( i<n){
        if(n%i==0){
            cout<<"Not Prime for "<< i <<endl;
        } else {
            cout<<"Prime for " << i <<endl;
        }

        i = i+1;
    }
    
}