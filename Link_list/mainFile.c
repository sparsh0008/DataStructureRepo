#include "myHeader.h"

int main()
{
	int choice = 0;

	do
	{
		printf("1. Create a node\n2. Add a node\n3. Delete a node\n4. Search a node\n5. reverse a node\n6. Display and Exit");
		printf("Enter the choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				createNode();
				break;
			case 2:
				printf("Enter the possition where you want to add : ");
				scanf("%d", &poss);
				printf("Enter the data u want to insert : ");
				scanf("%d", &data);
				addNode(poss, data);
				break;
			case 3:
				printf("Enter the possition you want to delete : ");
				scanf("%d", &numdel);
				deleteNode(numdel);
				break;
			case 4:
				searchNode();
				break;
			case 5:
				reverseNode();
				break;
			case 6:
				display();
				printf("Exit");
				break;
		}
	} while (choice != 6);

	return 0;
}