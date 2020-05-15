#include <cstdio>
using namespace std;

int main()
{
    //Pointers are used to store the address of variable
    int x=7;
    int *ip = &x;

    //When a variable is declared as reference, it becomes an alternative name for an existing variable.
    int &y = x;
    y = 42;

    int z = 73;
    ip = &z;

    printf("The value of *ip is %d\n", *ip);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);


    return 0;
}