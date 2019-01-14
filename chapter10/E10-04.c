#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void removeEntry ( struct entry *afterThisRemove )
{
	afterThisRemove->next = afterThisRemove->next->next;
}

int main (void)
{
	void removeEntry ( struct entry *afterThisRemove );
	struct entry startOfList, n1, n2, n3, *ptr;


	startOfList.next = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = (struct entry *) 0;
	
	printf ("Before call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}

	removeEntry ( &startOfList );

	printf ("After call:\n");

	ptr = startOfList.next;

	while ( ptr )
	{
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}
	
	return 0;
}











