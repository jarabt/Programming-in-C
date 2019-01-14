#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry ( struct entry *toBeInserted, struct entry *afterThisInsert )
{
	struct entry *temp;
	temp = afterThisInsert->next;
	afterThisInsert->next = toBeInserted;
	toBeInserted->next = temp;
}

int main (void)
{
	void insertEntry ( struct entry *toBeInserted, struct entry *afterThisInsert );
	struct entry startOfList, n1, n2, n3, anEntry, *ptr;


	startOfList.next = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = (struct entry *) 0;
	
	anEntry.value = 150;

	printf ("Before call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	insertEntry ( &anEntry, &startOfList );

	printf ("After call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}
	
	return 0;
}











