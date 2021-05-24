






/* This includes the general introduction to C programming language all the theory part have been tried to cover and the reamaining will be present on the next file
name of file general.c */

#include <stdio.h>
// header file contains the pre written code which helps use to run the program in an efficient way

int main(){
  
    
    printf("Hello World!\n");

    // To check the size of the dataypes we use the below __code
    printf("the size of int is %d \n", sizeof(int));
    printf("the size of char is %d \n", sizeof(char));
    printf("the size of float is %d \n", sizeof(float));
    printf("the size of double is %ld \n", sizeof(double));

    printf("Your sum for \a answer is a beep which you may not have heard");
    
    
    return(0);
  
    // here we have written return(0) because we want the code to return nothing but the output
    // note the data type before the main should mathch the return function
}

// how does a compiler work?
// --> preprocessing>compilation>assemby>linking




/*------------Tokens-----------------------

1. Keywords: goto,break,continue,printf,scanf,sizeof,int
2. Symbols: %,&,*
3. Identifiers: Variables, functions
4. Constants: Does not change in the entire program
5. String literals: ""

// C is a case sensitive lanugage here a and A both are considerd as different */





/*----------------------Datatypes-------------------------
1. Basic daatypes: int, char,float, double.
2. Derived datatypes: Pointers, structures and arrays.
3. Void datatypes: void
*/


/*---------------Variables--------------------------

-----------Rules for declaring the variables---------
1. do not use numerical value in starting point like 4teen
2. variable name always starts with alphabet or underscore LIKE: heaven or _even
3. reserved keywords are not used in decalring the vairables like for printf. 

Types of varibles:
1. int: numeric  
2. char: sign,characters
3. float: decimal values
4. double: decimal long values which can't be done by float

//Format specifiers are used to identify the datatype of any variable
int---%d
char---%c
float--%f
double--%lf  
*/

/*--------------------User input-----------------
    // now we will try to take user input
    int num;
    printf("Enter your number: \n");
    scanf("%d",&num);
  user input can be taken with the help of scanf function as you might have seen in the above code 
  
*/ 
     
/* -----------------Operators in C language----------------

1. Arithmetic operator --->  +, - , * , / , %
2. Logical operator --->  &&,  || , !
3. Bitwise operator --->  1's Compliement , Right Shift ,Left Shift 
4. Relational operator --->  
5. Assignment operator ---> ==, += , -= , *= ,/=

----------1. Arithmetic operator ------------
    int a=12,b=23;
    printf("Your sum for a+b is: %d \n", a+b);
    printf("Your sum for a-b is: %d \n", a-b);
    printf("Your sum for a*b is: %d \n", a*b);
    printf("Your sum for a/b is: %d \n", a/b);
    printf("Your sum for a--b is: %d \n", a%b);


----------2. Logical operator------------------
    int a=12,b=23;
    printf("Your sum for a&&b is: %d \n", a&&b);
    printf("Your sum for a||b is: %d \n", a||b);
    printf("Your negation for b is: %d \n", !b);
    

---------3. Bitwise operator---------------------
    int a=12,b=23;
    printf("Your sum for a~b is: %d \n", ~b);
    printf("Your sum for a>>b is: %d \n", a>>b);
    printf("Your negation for a<<b is: %d \n", a<<b);


---------4. Relational operator-------------------



--------------5. Assignment operator---------------
int a=12,b=23;
printf("your sum for a==b is: %d\n", a==b);
printf("your sum for a+=b is: %d\n", a+=b);
printf("your sum for a-=b is: %d\n", a-=b);
printf("your sum for a*=b is: %d\n", a*=b);
printf("your sum for a/=b is: %d\n", a/=b);
*/
 
/* ---------------Escape Sequence-------------------------
\n -- new line operator
\a -- beep
*/



// ------------------------------------------------------------------------------------------------------------------------