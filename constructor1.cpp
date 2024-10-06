// #include<iostream>
// #include<conio.h>
// using namespace std;
// class Demo{
//     int a, b;
//     public:
//      Demo(){
//         a = 10;
//      b = 10;

//      }
//     void Display();
// };

// void Demo::Display(){
//     cout<<"a ="<<a<<"\t b= "<<b<<endl;
// };

// int main () {
//     Demo aa;
//     aa.Display();
//     return 0;
// }

#include<iostream>
#include<conio.h>
using namespace std;
class Demo1 {
    int a, b ;
    public :
    Demo1(int m , int n){
        a = m;
        b = n;
    }

    void Display (){
        cout<<"a = "<<a<<"\t b ="<<b<<endl;
    };
};

int main (){
    Demo1 ab (4, 5);
    ab.Display();
    return 0;
};