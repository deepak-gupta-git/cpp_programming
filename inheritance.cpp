#include<iostream>
using namespace std;
class Father {
    protected:
    string surname = "Gupta";
};

class Son1:Father {
    string name = "Deepak";
    public:
    void disp() {
        cout<<name<<" "<<surname<<endl;
    }
};
class Son2:Father {
    string name = "Akhil";
     public:
    void show() {
        cout<<name<<" "<<surname;
    }
};

int main () {
    Son1 s1;
    Son2 s2;

    s1.disp();
    s2.show();
}