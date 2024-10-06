// #include<iostream>
// using namespace std;
// int main () {
//     char character ;
//     cout<<"Enter a char :";
//     cin>>character;

//     if(character >= 'a' && character <= 'z'){
//         cout<<"char is lowercase"<<endl ;
//     } else  {
//         cout<<"Uppercase";
//     }

//     return 0 ;
// }

#include<iostream>
using namespace std;
int main () {
    int num ;
    cout<<"Enter a number :";
    cin>>num;
    cout<< (num>=0 ? "Positive" : "Negative");
    return 0 ;
}