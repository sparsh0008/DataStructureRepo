#include<stdio.h>
#include<stdlib.h>

extern struct node* head;
extern struct node* temp;
extern struct node* ptemp;
extern struct node* temp2;

struct node
{
	int data;
	struct node* link;
};

int num, numdel;
void createNode(void);
void deleteNode(int);
void addNode(void);
void display(void);
void searchNode(void);
void reverseNode(void);