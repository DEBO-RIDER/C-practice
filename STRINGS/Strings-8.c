//C Program to Print the First Letter of Each Word


#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str[] = "debopam sinha ";
	int i, j = 0; 

	// Traversing the Character array 
	for (i = 0; i < strlen(str); i++) { 

		// To store first character of  String if it is not a  whitespace. 
		if (i == 0 && str[i] != ' ') { 
			printf("%c ", str[i]); 
		} 
		// To check whether Character is first character of  word and if yes store it. 
		else if (i > 0 && str[i - 1] == ' ') { 
			printf("%c ", str[i]); 
		} 
	} 
	return 0; 
}
