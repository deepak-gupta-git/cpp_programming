#include<iostream>
using namespace std;
int main (){

int marks[5]= {10,20,30,40,50};
int size = 5;
int smallest = INT8_MAX;
int largest = INT16_MIN;

for(int i=0; i<size; i++){
    if(marks[i]>largest){
        largest = marks[i];
    }
}
for(int i=0; i<size ; i++){
    if(marks[i]<smallest){
        smallest = marks[i];
    }

}
cout<<"Smallest Number is : "<<smallest<<endl;
cout<<"Largest Number is : "<<largest<<endl;
    return 0;
}