#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

struct dog
{
	int age;
	char name[10];  //removed = syntax error in declaration of char array
};


void main()
{
	struct dog thing1;  //replaced : with ; //removed ()
	struct dog thing2;

	thing1.age = 5;  //removed [] from declaration which also fixes error for line 26 declaration
	thing2.age = 13;
	
	puts("What is your dogs name? ");  // replaced {} with () syntax
	gets(thing1.name);  //removed s from thing1.names

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name );  // changed %i\n to %s\n format specifier for print int to char
	printf("Age: %i\n",thing1.age);  //replaced : with ;
	printf("Thing2 Name: %s\n",thing2.name);  //terminating quotation mark was missing from end of character print inside ()
	printf("Thing2 Age %i\n",thing2.age);  //terminating quotation mark was missing from end of character print inside ()
}