// Counting words


#include <stdio.h>
#include <stdbool.h>

// Function to determine if a character is numeric

bool numeric (const char c)
{
	if ( c >= '0' && c <= '9' )
		return true;
	else
		return false;
}

// Function to determine if a character is alphabetic

bool alphabetic (const char c)
{
	if ( (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') )
		return true;
	else
		return false;
}

// Function to count the number of words in a string

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c),
	     numeric (const char c);

	for ( i = 0; string[i] != '\0'; ++i )
		
		if ( alphabetic(string[i]) )
		{
			if ( lookingForWord )
			{
				++wordCount;
			lookingForWord = false;
			}
		}
		
		else if ( ( string[i] == '\'' ) && ( alphabetic (string[i - 1]) ) )
			lookingForWord = false;			// apostrophe could be a part of a word
		
		else if ( numeric (string[i]))			// numbers are word	
		{
			if ( lookingForWord )
			{
				++wordCount;
			lookingForWord = false;
			}
		}

		else if ( ( string[i] == ',' ) && ( numeric (string[i - 1]) ) )
			lookingForWord = false;			// comma could be a part of a number

		else if ( (string[i] == '.') && ( numeric (string[i + 1]) ) )
		{						// period could be part of a number
			if ( lookingForWord )
			{
				++wordCount;
			lookingForWord = false;
			}
		}
				
		else
			lookingForWord = true;

	return wordCount;
}

int main (void)
{
	const char text1[] = "Well, here I'm 12 3 10,000 7.566 .";
	const char text2[] = "And here .";
	int countWords (const char string[]);

	printf ("%s - words = %i\n", text1, countWords (text1));
	printf ("%s - words = %i\n", text2, countWords (text2));

	return 0;
}

			

	

