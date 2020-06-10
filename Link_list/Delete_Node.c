#include "myHeader.h"

struct node* ptemp = NULL;
struct node* temp2 = NULL;

void deleteNode(int pos)
{
	if (head->data != pos) // check for the possition is it the head or not
	{
		temp = head;

		while (temp->data != pos)
		{
			ptemp = temp;
			temp = temp->link;
			if (temp == NULL)
			{
				printf("Not found");
			}

		}
		temp2 = temp->link;//next node of temp


		// in next 2 steps we are going to break the connect from the previous as well as next node 
		ptemp->link = temp2;
		temp->link = NULL;

		printf("Deleted node : data = %d\n\n", temp->data);

	}
	else // now in this case possition is pointing out to the head possition 
	{

		temp = head;
		head = temp->link;
		temp->link = NULL;

		printf("Deleted node : data = %d\n\n", temp->data);

	}
}