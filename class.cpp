#include<iostream>
using namespace std;
class addition {
    int a, b;

    public:
    void getData();
    void putData();
};

void addition::getData(){
    cout<<"Enter Two Numbers :"<<endl;
    cin>>a>>b;
}

void addition::putData(){
    cout<<"Addition is : "<<a+b<<endl;
}

int main () {
    addition aa;
    aa.getData();
    // aa.putData();
    return 0;
}
