#include<iostream>
using namespace std;

// int sum (int a = 5, int b = 10){
//     int c = a + b ;
// return c;
// }

// int sumN (int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;  
//     }
//     return sum;
// }

// int factoialN (int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }

//     return fact;
// }

int sumofDigit (int num){
    int digiSum = 0;
    while(num > 0){
        int lstDig = num % 10;
        num /= 10;

        digiSum += lstDig;
    }

    return digiSum ;
}

int main(){
    // cout<<sumN(5)<<endl;
    // cout<<sumN(50);
    cout<<sumofDigit(5566);
    return 0;
}