// Mario Benavides
// Lab 8 c-strings - Completed

// three functions:  upper, lower, and flip
// converting each to uppercase
// converting, each to lowercase
// determine whether it is upper or lowercase


#include <iostream>
using namespace std;


// Function prototype	
void upper(char *c);
void lower(char *c);
void flip(char *c);


// accept the string to convert
int main (int argc, const char* argv[]) //argument count, argument vector
{
	const int LENGTH = 100;	// maximum LENGTH for string
	char input[LENGTH]; // array of char

cout << "Enter the string you want to convert: ";
cin.getline(input, LENGTH); // get whole line, whitespaces too, LENGTH for input

// order performed
cout << "\nFlip: "; // flip first, otherwise it just flips one case
	flip(input);

cout << "\n\nUpper: ";
	upper(input);

cout << "\n\nLower: ";
	lower(input);

cin.ignore(); // discards characters
cin.get(); // pause the program


return 0;
}


// The upper function 
void upper(char *c) // char pointer
{
	int i = 0;
		while(c[i] != '\0') // null terminator
{
c[i] = toupper(c[i]); // point [variable]
	cout << c[i];
++i; // increments the value, then returns it.
}
}


// The lower function
void lower(char *c) // char pointer
{
	int i = 0;
		while(c[i] != '\0') // null terminator
{
c[i] = tolower(c[i]); // point [variable]
	cout << c[i];
++i; // increments the value, then returns it.
}
}


// The flip function
void flip(char *c) // char pointer
{
	int i = 0;
		while(c[i] != '\0') // null terminator
{
if(c[i] == tolower(c[i])) // loop
c[i] = toupper(c[i]); // point [variable]
else
c[i] = tolower(c[i]);
	cout << c[i];
++i; // increments the value, then returns it.
}
}
