#include <iostream>

using namespace std;

float returns(float monthly_amount, float monthly_return){
    float sol = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 12; j++){
            sol += (monthly_amount*monthly_return+monthly_amount);
        }
        monthly_amount += (monthly_amount*0.1); // increase the investment amount by 10 percent every year
    }
    return sol;
}

int main() {
    // Let's assume your monthly investment is 25K rupees
    cout<<"Crypto returns = " << returns(5000, 7.58)<<endl; // Bitcoin is increasing at a growth rate of 91% per year
    cout<<"US Stocks returns = " << returns(7500, 1.67)<<endl; // Let's assume average annual growth rate of US stocks is 20%
    cout<<"Direct Indian Stocks returns = " << returns(5000, 1.67)<<endl; // Let's assume average annual growth rate of Indian Direct stocks is 20%
    cout<<"Indian Mutual Funds returns = " << returns(7500, 1)<<endl; // NSE/BSE annual growth rate is 12-16%, Let's take 12% (worst case)
    cout<<"Total returns for 10 years = " << (returns(5000, 7.58)+returns(7500, 1.67)+returns(5000, 1.67)+returns(7500, 1))<<endl; // total returns after 10 years
}
