```
#include <iostream>        (library)

int main()
{
  std::cout<<"Hi, World!"
  return 0;
}
```


int width;<br/>
width=5;       (Giving integer a value)<br/>
width=7;<br/>
int width=5;   #copy initialization<br/>
int width(5); #direct initialization<br/>
int width{5} #uniform initialization in c++<br/>
         - allows for zero initialization<br/>
         - will lead to an error if given non-integer value (eg. 4.5) #copy and direct will drop the fraction to give 4<br/>
```
int a=5, b=6;<br/>
int c(7), d(2);<br/>
int c{9},f{10};<br/>
```
----
```
#include <iostream>
int main()
{
  std::cout<<"Hello";
  std::cout<<"My name is Iman";
  return 0;
}
```
--> Hello! My name is Iman   (Printed on the same line)<br/>

----
```
#include <iostream>
int main()
{
  std::cout<<"Hello!"<<std::endl;
  std::cout<<"My name is Iman";
  return 0;
}
```
--> Hello!<br/>
    My name is Iman<br/>

----
```
#include <iostream>
int main()
{
  int x{5};
  std::cout<<"x is equal to:"<<x<<'\n'; (using \n standalone)
  std::cout<<"And that's all folks! \n"; (using \n in a double-quoted piece of text)
  return 0;
}
```
--> x is equal to 5<br/>
    And that's all folks!

----
```
#include <iostream>
int main()
{
  std::cout<<"Enter a number:"
  int x{};  (define a variable to share user input-zero initialize)
  std::cin>>x; (input)
  std::cout<<"You entered"<<x<<'\n'; (using \n in a double-quoted piece of text)
  return 0;
}
```
--> You entered __

----

uninitialized --> int x; (random value)<br/>
identifier --> name of a variable,type etc.<br/>
-always initialize your variables<br/>
-undefined behaviour --> most likely a result of uninitialized variable (program works anyways but it is wrong)<br/>
-c++ is case sensitive<br/>
  -variables normally one word;all lower case<br/>
  -identifier names starting with a capital letter are normally used for user-defined types<br/>

----

-Literals are fixed values that have been inserted directly into the source code (literal constant, can't be changed)<br/>
-Operators,operands<br/>
+,-,x,/ (follows PEMDAS)| literals (eg. 2, 3)<br/>
=,==,<<,>><br/>
-Unary(works on one operand eg. -5), binary (works on 2 operands eg. 2+3), ternary (works on 3 operands)<br/>

----

-expressions don't compile by themselves, requires a statement<br/>
int x{2+3};<br/>
type identifier{expression};<br/>
2+3; (useless, will be discarded)<br/>

----

###Data Types<br/>

-signed/unsigned ('-')<br/>
-character (a,b,$...)<br/>
-numerical (1,2,3...)<br/>
-Boolean (True, False)<br/>
-floating points (3.14, 0.01)<br/>

-string has its own library to be included<br/>
```
#include <string>    (library)
string mystring;     (initialize the string)
mystring="This is a string";
```
----

###Functions<br/>
```
void identifier()      (identifier-->fuction name)
{
 //code here
}

Starting main()
In doPrint()
Ending main()

#include <iostream>

void doPrint()
{
//
}

int main
{
 doPrint();
 ...
}
```
-functions are able to call other functions as well <br/>

----
###&&, or

(&&)
a  | b | a && b
-- | --|--------
T  | T |  T
T  | F |  F
F  | T |  F
F  | F |  F

(or)
a  | b | a or b
-- | --|--------
T  | T |  T
T  | F |  T
F  | T |  T
F  | F |  F

----

###if else
```
if (x==100)
   cout<<"x is 100";
```
###while loops
```
{
  int n=10;
  while (n>0){
    cout<<n<<",";
    --n;
  }
  cout<<"Liftoff!\n";<br/>
}
```
###do loops
```
{
  do{...
    }while(str!="goodbye");
}
```

###for loop
```
{
for (int n=10;n>0;n--){
cout<<n<<",";
}
cout<<'liftoff!\n';
}
```

###Range based loops
```
int main()
{
  string str{"Hello"};
  for (char:str)
  {
    cout<<"["<<c<<"]";
  }
  cout<<'\n'
}
```
----

###switch
```
switch(x){
  case constant1:
  group-of-statements-1;
  break;
  case constant2:
  group-of-statements-2;
  break;
  case constant3:
  group-of-statements-3;
  break;
}
```
