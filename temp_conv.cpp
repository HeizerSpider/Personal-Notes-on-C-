#include <iostream>
using namespace std;

int fahrenheit_to_celsius(int);

int main(){
    int value;
    std::cout<<"Enter temperature value in fahrenheit:";
    std::cin>>value;
    std::cout<<"Temperature in celsius:"<<fahrenheit_to_celsius(value);

}

int fahrenheit_to_celsius(int f){
    int c;
    c=(f-32)*5/9;
    return c;
}