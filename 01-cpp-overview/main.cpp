/* 1.1 Your first C++ program */
#include <iostream>
using namespace std;

int main() {
	cout << "hello, world" << endl;
	return 0;
}


/* 1.2 The history of C++
 - in 155, this IBM team produced the initial version of FORTRAN (whose name is a contraction of formula translation), which was the first example of a higher-level programming language.
 - in programming, the old order is represented by the procedural paradigm, in which programs consist of a collection of procedures and functions that operate on data.
 - the new model is called the object-oriented paradigm, in which programs are viewed instead as a collection of data objects that embody particular characteristics and behavior.
 - as a programmer, you must master many different paradigms, so that you can use the model that is most appropriate to the task at hand.
*/


/* 1.3 The compilation process
 - source file needs to be translated into executable form.
 - the compiler program translates the source file into an object file containg the machine-language instructions.
 - this object file is then combined with other object files to produce an executable file.
 - the other object files typically included predefined object files called libraries, which contain the machine-language instructions for various operations commonly required by programs.
 - the process of combining all the individual object files into an executable file is called linking.
*/


/* 1.4 The structure of a C++ program
 - comments, text that is ignored by the compiler but which nonetheless conveys information to other programmers.
 - library inclusions, libraries are collections of previously written tools that perform useful operations. the designers of C++ made it possible to segment code into structures called namespaces, each of which keeps track of its own set of names.
 - function prototypes, computation in a C++ program is carried out in the context of functions. A function is a named section of code that performs a specific operation. A C++ prototype consists of the first line of the function definition followed by a semicolon. int raiseToPower(int n, int k);
 - the main program, every C++ program must contain a function with the name main. return 0
 - function definitions, because large programs are difficult to understand in their entirety, most programs are broken down into several small functions.
*/ 


/* 1.5 Variables
 - data values in a program are usually stored in variables, which are named locations in memory capable of holding a particular data type.
 type namelist;
 int limit;
 double n1, n2, n3;
 int result = 1;
 - an initial value specified as part of a declaration is called an initializer. 
 const double PI = 3.14
*/


/* 1.6 Data types
 - a data type is defined by two properties: a domain, which is the set of values that belong to that type, and a set of operations, which defines the behavior of that type.
 - five types of atomic or primitive types: integer, floating-point, Boolean, character, and enumerated types.
 - the ability to move a program between different machines is called portability.
 unsigned int health = 100; no negatives
 - numbers that include a decimal fraction are called floating-point numbers, which are used to approximate real numbers in mathematics. (float, double and long double) 
 char
 - a sequence of characters is called a string.
 #include <string>
 - C++ allows you to define new types by listing the elements in their domain. Such types are called enumerated types
 enum typename { namelist };
 - typename is the name of the new type and namelist is a list of the constants in the domain, separated by commas.
 enum Direction { NORTH, EAST, SOUTH, WEST };
 enum Month {
	 PENNY = 1,
	 NICKEL = 5,
	 DIME = 10,
	 QUARTER = 25,
	 HALF_DOLLAR = 50,
	 DOLLAR = 100
 };
*/


/* 1.7 Expressions
 - the operation of discarding a decimal fraction is called truncation.
 - you can convert one type to another using what is called a type cast.
*/


/* 1.8 Statements
 - the most common statement in C++ is the simple statement.
 expression;
 - blocks are sometimes referred to as compound statements.
 {
	 statement1
	 statement2
	 ...
	 statementn
 }
 - if statements
 - switch statements
 - 
*/