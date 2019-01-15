// Sorting the dictionary program

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
	int i = 0, answer;
	bool areEqual;

	while ( s1[i] == s2[i] && 
			s1[i] != '\0' && s2[i] != '\0' )
	       ++i;
	
	if ( s1[i] < s2[i] )
		answer = -1;		/* s1 < s2 */

	else if ( s1[i] == s2[i] )
		answer = 0;		/* s1 == s2 */

	else
		answer = 1;		/* s1 > s2 */

	return answer;
}

// function to sort a dictionary

void dictionarySort (struct entry dictionary[], const int entries)
{
	struct entry temp;
	int i;
	int j;
	
	for ( i = 0; i < entries; ++i )
		for ( j = 1; (i + j) < entries; ++j )
			if ( ( compareStrings ( dictionary[i].word, dictionary[i + j].word ) ) == 1 )  
			{
				temp = dictionary[i];
				dictionary[i] = dictionary[i + j];
				dictionary[i + j] = temp;
			}
}

int main (void)
{
	int i;

	void dictionarySort (struct entry dictionary[], const int entries);
	
	struct entry dictionary[10] = 
	{
		{ "bardvark", 	"a burrowing African mammal"},
		{ "fbyss", 	"a bottomless pit"},
		{ "hcumen", 	"mentally sharp; keen"},
		{ "addle",	"to become confused"},
		{ "xerie", 	"a high nest"},
		{ "xffix",	"to append, attach"},
		{ "agar", 	"a jelly made from seaweed"},
		{ "ahoy", 	"a nautical call of greeting"},
		{ "bigrette",	"an ornamental cluster of feathers"},
		{ "fjar", 	"partially opened"}
	};

	
	dictionarySort (dictionary, 10);

		
	for ( i = 0; i < 10; ++i )
		printf ("%s\n", dictionary[i].word);

	return 0;
}


