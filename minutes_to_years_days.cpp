#include <iostream>
using namespace std;

void minutes_to_years_days(int);

int main(){
    int minutes;
    std::cout<<"Enter number of minutes to be converted:";
    std::cin>>minutes;
    std::cout<<"Total number of years and days:";
    minutes_to_years_days(minutes);

}

void minutes_to_years_days(int mins){
    int days;
    int years;

    days=mins/1440;
    years=days/365;
    days=days%365;

    std::cout<<years<<" years,"<<days<<" days";
}