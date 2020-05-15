#include <cstdio>
using namespace std;

int main()
{
    char string[] = "abcdefg";


    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }

    //each character in an array (which makes a string) is referenced by a single pointer
    //essentially the pointer is moving down the array of letters 
    for(char *cp = string; *cp; ++cp){
        printf("*cp is %c\n", *cp);
    }

    //at the end of the string is a 0, which can be used to reference to break the for loop as shown
    for(char c : "String"){
        if(c==0) break;
        printf("c is %c\n", c);
    }

    for(char c : string){
        // if(c==0) break;
        printf("c is %c\n", c);
    }

    return 0;
}