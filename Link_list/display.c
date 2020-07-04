#include "myHeader.h"

void display()
{
	struct node* current = head;

	if (head == NULL)
	{
		printf("\nLinked list is empty\n");
		/*return 0;*/
	}

	printf("Nodes are: \n");
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->link;
	}
	printf("\n");
}