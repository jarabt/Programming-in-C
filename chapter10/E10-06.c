#include <stdio.h>

struct entry
{
	int value;
	struct entry *preceding;
	struct entry *next;
};

void insertEntry ( struct entry *toBeInserted, struct entry *afterThisInsert )
{
	struct entry *temp;
	temp = afterThisInsert->next;
	afterThisInsert->next = toBeInserted;
	toBeInserted->next = temp;
	toBeInserted->preceding = afterThisInsert;
	toBeInserted->next->preceding = toBeInserted;
}

void removeEntry ( struct entry *thisRemove )
{
	thisRemove->preceding->next = thisRemove->next;
	thisRemove->next->preceding = thisRemove->preceding;
}

int main (void)
{
	void insertEntry ( struct entry *toBeInserted, struct entry *afterThisInsert );
	void removeEntry ( struct entry *thisRemove );
	struct entry startOfList, n1, n2, n3, anEntry, *ptr;

	startOfList.next = &n1;

	n1.value = 100;
	n1.preceding = &startOfList;
	n1.next = &n2;

	n2.value = 200;
	n2.preceding = &n1;
	n2.next = &n3;

	n3.value = 300;
	n3.preceding = &n2;
	n3.next = (struct entry *) 0;

	anEntry.value = 150;

	printf ("Before insertEntry call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	insertEntry ( &anEntry, &n1 );
	
	printf ("After insertEntry call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	printf ("\nBefore removeEntry call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	removeEntry ( &anEntry );

	printf ("After removetEntry call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	return 0;
}



