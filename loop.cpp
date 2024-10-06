// #include<iostream>
// using namespace std;
// int main () {
//     int num = 1;  //initialization

//     while(num <=5) {  //condition
//         cout<<num<<endl; 
//         num++; //infinite loop --X--   if this not use
//     }
// }


//for loop

// #include<iostream>
// using namespace std;
// int main () {
//     int n = 5;
//    for(int i= 1; i<=n; i = i+3){ //i+2 will increage
//     // cout<<n<< " "; //repeating the same element
//     cout<<i<< " "; //increasing one by one the same element
//    }

//    return 0 ;
// }


#include<iostream>
using namespace std;
int main () {
    // int n = 1;
    // int sum = 0;
    // while(n<=5){
    //     sum+= n;
    //     n++;
    // }
    // cout << sum << endl;
    // int n ;
    // bool isPrime = true;
    // cout<<"Enter a number :";
    // cin>>n;


 
    int n = 100; 
    for (int i = 2; i <= n; i++) {
        bool isPrime = true; 
    
        for (int j = 2; j*j<= i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            cout << i << " "; 
        }
    }



    // if(isPrime == true){
    //     cout<<"Number is prime";
    // } else {
    //     cout<<"Number is not prime";
    // }
    return 0; 
}
