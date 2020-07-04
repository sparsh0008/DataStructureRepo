#include "myHeader.h"

struct node* post = NULL;
struct node* pre = NULL;

void reverseNode()
{
	while (temp != NULL)
	{
		post = temp->link;
		temp->link = pre;
		pre = temp;
		temp = post;
	}
	head = pre;
}