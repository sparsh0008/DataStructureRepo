#include<stdio.h>
#include<stdlib.h>

extern struct node* head;
extern struct node* temp;
extern struct node* ptemp;
extern struct node* temp2;
extern struct node* pre;
extern struct node* post;

struct node
{
	int data;
	struct node* link;
};

int num, numdel, poss, data, search;
void createNode(void);
void deleteNode(int);
void addNode(int , int);
void display(void);
void searchNode(int);
void reverseNode(void);