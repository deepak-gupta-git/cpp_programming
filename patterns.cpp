#include<iostream>
using namespace std;
int main (){
    // int n = 4; 
    // int num = 1;
    // char ch = 'A';
    // for(int i=0; i<n ; i++){ //outer loop
    //     // char ch = 'A';
    //     int m = 4;
    //     for(int j=0; j<m; j++){ //inner loop
    //        cout<<ch<< " ";
    //         ch = ch+1;
    //     // cout<<num<< " ";
    //     // num++;
    //     }

    //     cout<<endl;
    // }

    // int n = 5;
    // int num = 1;
    // char ch = 'A';
    // for(int i=1 ; i<n; i++){
    //     for(int j=1; j<i+1; j++){
    //         // cout<<num+i<<" "
    //             cout<<ch<<" ";
                
    //     }
    //      ch = ch + 1;  
    //     cout<<endl;
    // }

    // int n = 5;
    // // int num = 1;
    // for(int i=0; i<n; i++){
    //     // for(int j=i+1; j>0; j--){ j=i+1; j>0 ; j-- for reverse the loop
    //     for(int j=1; j<i+1; j++){
    //         cout<<i<<" ";
    //         // num++;
    //     }

    //     cout<<endl;
    // }

    int n = 5;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){  //space
            cout<<" ";
        }

        for(int j=0; j<n-i; j++){  //numbers
            cout<<(i+1);
        }
           cout<<endl;
    }
 

    return 0;
}