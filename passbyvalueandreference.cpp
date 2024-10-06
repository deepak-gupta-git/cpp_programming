#include<iostream>
using namespace std;

// void passValue(int &y){
//      y=100;
// };

// int main(){
//    int  a = 5;
//    passValue(a);
//     cout<<a<<endl;

// }

// void passValue (int &z){
//     z=100;
// };

int add (int a, int b=1, int c=3){
    return (a+b+c);
}

int main(){
    // int a = 5;
    // passValue(a);
    // cout<<a<<endl;
    cout<<add(2)<<endl;
    cout<<add(5)<<endl;
    return 0;
}

