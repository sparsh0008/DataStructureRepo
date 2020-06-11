#include "myHeader.h"

struct node* head = NULL; 
struct node* temp = NULL;
struct node* ptemp = NULL;

void addNode(int poss, int item)
{
	printf("temp of data is %d\n", temp->data);

	temp = head;

	while (temp->data != poss)
	{
		ptemp = temp;
		temp = temp->link;
		if (temp == NULL)
		{
			printf("Not found");
		}

	}

	printf("temp data %d and ptemp of data %d", temp->data, ptemp->data);

	/*Create a NEW node*/
	struct node* NEW = (struct node*)malloc(sizeof(struct node));

	if (NEW == NULL)
	{
		printf("Memory not available");
		/*return 0;*/
	}

	NEW->data = item;
	NEW->link = temp;
	ptemp->link = NEW;
}