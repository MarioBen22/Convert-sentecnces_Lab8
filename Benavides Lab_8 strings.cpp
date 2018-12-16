// Mario Benavides
// Lab 8 strings - Completed

// Accepts as input a sentence with all the words running together.
// Convert the sentence to a string in which the words are separated 
// by spaces and only the first word starts with an uppercase letter.


#include <iostream>
#include <iomanip>
using namespace std;


// input a sentence with all the words running together
int main()
{
string sentence;
int i;
i = 0; // first word starts with uppercase

	cout << "Enter the sentence to convert: ";
	cin >> sentence;


// words are separated by spaces and only the first word starts with an uppercase letter
while(i < sentence.length()) // loop
{  
  if(isupper(sentence.at(i))) // check for uppercase
  {  
    sentence.insert(i," "); // insert space
    sentence.at(i+1) = tolower(sentence.at(i+1));  // convert after first letter to lowercase
  }
  i++;  // returns the value, and then increments it.
}

	cout << sentence << endl;

cin.ignore(); // discards characters
cin.get(); // pause the program
}
