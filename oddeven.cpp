#include<iostream>
using namespace std;
class OddEven {
    private:
    int a ;

    public:
    void getData();
    void putData();
};

void OddEven::getData(){
    cout<<"Check Number :"<<endl;
    cin>>a;
};

void OddEven::putData(){
    if(a>0)
    cout<<"Number Is possitive";
    else if(a<0)
    cout<<"Number Is negative";
    else
    cout<<"number is zero";
};

int main () {
    OddEven aa;
    aa.getData();
    aa.putData();
    return 0;
}

