// we will first try to print a message via printf function

#include <stdio.h>
int main(){

    printf("My name is Barry Allen");
    return(0);
}


/*---------------Variables------------------

What is variable??
->A variable is a container that stores a ‘value’. 
In the kitchen, we have containers storing rice, dal, sugar, etc. 
Similar to that variable in c stores value of a constant. 
Example:

   a = 3;          //a is assigned “3”
   b =4.7;        //b is assigned “4.7”
   c=’A’;          //c is assigned “A”

*/



/*---------Rules for naming variables in C:----------------

1. The first character must be an alphabet or underscore(_).
2. No commas, blanks allow.
3. No special symbol other than underscore is allowed
4. Variable names are case sensitive

*/

/*----------Constants-----------------------

What are Constants??
->An entity whose value doesn’t change is called a constant.

// Types of constant

Primarily there are 3 types of constant:

1. Integer constant =    -1,6,7,9
2. Real constant =     -322.1,2.5,7.0
3. Character constant = ‘a’,’$’,’@’(must be enclosed within single inverted commas)

*/

/*-----------Keywords-----------------

What are keywords??
->Keywords are reserved words, whose meaning is already known to the compiler. 
There are 32 keywords available in c:
 
 -------------------------------------
 |auto	    |double	  |int	   |struct
 |break	    |long	  |else    |switch
 |case	    |return   |enum	   |typedef
 |char	    |register |extern  |union
 |const	    |short	  |float   |unsigned
 |continue	|signed	  |for	   |void
 |default	|sizeof	  |goto	   |volatile
 |do	    |static	  |if 	   |while
 ----------------------------------------

 */


/*-----------------The basic structure of a C program---------------------

All c programs have to follow a basic structure. A c program starts with the main function and executes 
instructions presents inside it. Each instruction terminated with a semicolon(;)

There are some basic rules which are applicable to all the c programs:

1. Every program's execution starts from the main function.
2. All the statements are terminated with a semi-colon.
3. Instructions are case sensitive.
4. Instructions are executed in the same order in which they are written.

*/


/*------------------Comments---------------------------------------

    Comments are used to clarify something about the program in plain language. 
    It is a way for us to add notes to our program. There are two types of comments in c:

    Single line comment: //This is a comment.
    Multi line comment : /*This is multi line comment*/
    // Comments in a C program are not executed and ignored.


/*-------------------Compilation and execution------------------------

A compiler is a computer program which converts a c program into machine language so that it can be easily 
understood by the computer

A program is written in plain text. This plain text is a combination of instructions in a particular sequence. 
The compiler performs some basic checks and finally convert the program into an executable.

*/


/*-----------------Library functions-----------------------------------

C language has a lot of valuable library functions which is used to carry out a certain task, for instance, 
printf function is used to print values on the screen.

*/


/*---------------Types of variables-----------------------------

Integer variables - int a=3;
Real variables -  int a=7.7 (wrong as 7.7 is real) ; float a=7.7;
Character variables - char a=’B’;

*/


// Receiving input from the user

/* In order to take input from the user and assign it to a variable, we use scanf function.

The syntax for using scanf:

|-------------------------------------------|
|scanf(“%d”,&i); // [This & is important]   |
|-------------------------------------------|

& is the “address of” operator and it means that the supplied value should be copied to the address which
 is indicated by variable.

*/
