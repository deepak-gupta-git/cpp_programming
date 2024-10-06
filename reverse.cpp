#include<iostream>
using namespace std;
class reverse {
    private:
    int n;

    public:
    void getData();
    void putData();
};

void reverse::getData(){
    cout<<"Enter The Numbers :"<<endl;
    cin>>n;
};

void reverse::putData(){
    int rev = 0;
    while(n > 0){
        rev = (rev*10)+n%10;
        n= n/10;
    }

    cout<<"Reverse is :"<<rev<<endl;
};

int main(){
    reverse aa;
    aa.getData();
    aa.putData();
    return 0;
}