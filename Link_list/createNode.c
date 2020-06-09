#include "myHeader.h"

struct node* head = NULL;
struct node* temp = NULL;

void createNode()
{
	int item;
	printf("Enter the data to be added : ");
	scanf("%d", &item);

	struct node* NEW = (struct node*)malloc(sizeof(struct node));

	if (NEW == NULL)
	{
		printf("Memory not available");
	}

	NEW->data = item;
	NEW->link = NULL;

	/*Check if the LSIT is empty*/
	if (head == NULL)
	{
		head = NEW;
	}
	else
	{
		temp = head;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = NEW;
	}
}