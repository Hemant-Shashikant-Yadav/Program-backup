#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *start1 = NULL, *start2 = NULL, *start3 = NULL, *p, *q;
int num;

int create( int data1);
void traverse(NODE *start);
void merge(NODE *p1, NODE *q2);

int main()
{
	int ch;
	while (1)
	{
		printf("Welcome\n1.Create 1 LL= \n2.Traverse 1 LL\n3.Create 2 LL= \n4.Traverse 2 LL\n5.Merge\n6.Traverse\n7.Exit\n Choice = ");
		scanf("%d", &ch);

		if (ch == 7)
		{
			break;
		}
		else
		{
			switch (ch)
			{
			case 1:
				printf("Enter the data = ");
				scanf("%d", &num);
				start1 = create(num);
				break;

			case 2:
				traverse(start1);
				break;
			}
		}
		return 0;
	}
}
int create(int data1)
{
	NODE *start=NULL;
	p = (NODE *)malloc(sizeof(NODE));
	p->data = data1;

	if (start == NULL)
	{
		p->next = NULL;
		start = p;
	}
	else
	{
		q = start;
		while (q->next != NULL)
		{
			q = q->next;
		}
		p->next = NULL;
		q->next = p;
	}
	
	// NODE *newNode = (NODE *)malloc(sizeof(NODE));
	// newNode->data = data1;
	// newNode->next = head->next;
	// head = newNode;
	return start;
}
void traverse(NODE *start)
{
	NODE *k;
	k = start;
	while (k != NULL)
	{
		printf("Data = %d\n", k->data);
		k = k->next;
	}
	printf("End");
}
