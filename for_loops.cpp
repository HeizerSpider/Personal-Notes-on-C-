#include <cstdio>
using namespace std;

int main()
{
    char string[] = "abcdefg";


    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }

    for(char *cp = string; *cp; ++cp){
        printf("*cp is %c\n", *cp);
    }

    for(char c : "String"){
        if(c==0) break;
        printf("c is %c\n", c);
    }

    return 0;
}