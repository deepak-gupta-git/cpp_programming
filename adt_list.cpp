#include<iostream>
#include<list>
int main (){
    std::list<int>listNumber;
    listNumber.push_back(6);
    listNumber.push_back(9);
    listNumber.push_back(11);


    for(const auto & item:listNumber){
        std::cout<<item<<" " ;
    }

    return 0;
    
}