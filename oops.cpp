#include<iostream>
using namespace std;
class person {
    int age;
    string name;
    string address;

    public :
    void input (){
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter address : ";
        cin>>address;
    }

    void display () {
        cout<<"Age is :"<<age<<endl;
        cout<<"Name is :"<<name<<endl;
        cout<<"Address is :"<<address<<endl;
    }
};

int main () {
    person rohit,mohit,raju;

    rohit.input();
    rohit.display();
    
}