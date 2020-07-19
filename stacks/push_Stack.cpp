#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int TOP;
	int* S;
};
void create(struct stack* st)
{
	printf("Enter the size : ");
	scanf("%d", &st->size);
	st->TOP = -1;
	st->S = (int*)malloc(st->size * sizeof(int));
}
void Display(struct stack* st)
{
	int i;
	for (i = st->TOP; i >= 0; i--)
	{
		printf("%d", st->S[i]);
		printf("\n");
	}
}
void push(struct stack* st, int x)
{
	if (st->TOP == st->size - 1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		st->TOP++;
		st->S[st->TOP] = x;
	}
}
int main()
{
	struct stack st;
	create(&st);

	push(&st, 10);
	push(&st, 20);
	push(&st, 30);

	Display();
	return 0;
}