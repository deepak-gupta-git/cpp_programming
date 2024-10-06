#include <iostream>
using namespace std;

float calculate_simple_interest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    float principal_amount, interest_rate, time_period,pi;

    cout << "Enter principal amount: ";
    cin >> principal_amount;
    // pi=principal_amount;

    cout << "Enter interest rate: ";
    cin >> interest_rate;

    cout << "Enter time period (in years): ";
    cin >> time_period;

    // for(int i=1; i<=time_period; i++) {
    //     principal_amount+=(principal_amount)+(principal_amount*interest_rate)/100;
    // }

    float simple_interest = calculate_simple_interest(principal_amount, interest_rate, time_period);

    cout << "Simple Interest:" << simple_interest + principal_amount;
    // cout<<"CI="<<principal_amount;

    return 0;
}

