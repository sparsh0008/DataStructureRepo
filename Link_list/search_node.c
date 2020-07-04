#include "myHeader.h"


void searchNode(int search)
{
	temp = head;
	while (temp->data != search)
	{
		temp = temp->link;
	}
	if (temp->data == search)
	{
		printf("Element found\n\n");
	}
	else if(temp->data != search)
	{
		printf("Element not found\n\n");
	}
}