/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int vertex;
	struct node *next;
};
typedef struct node NODE;

NODE *adjacency[100], *p, *q;

int i, j, k, n;

void input();
void print();

int main()
{
	input();
	printf("\n Printing the adjacency list \n");
	print();
	return 0;
}

void input()
{
	int n;
	printf("Enter no. of vertices : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		adjacency[i] = NULL;
	}
	int value;
	for (i = 0; i < n; i++)
	{
		printf("How many vertices are adjacent to this : ");
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			printf("Enter adjacent vertex : ");
			scanf("%d", &value);
			p = (NODE *)malloc(sizeof(NODE));
			p->vertex = value;
			if (adjacency[i] == NULL)
			{
				p->next = NULL;
				adjacency[i] = p;
			}
			else
			{
				p->next = adjacency[i];
				adjacency[i] = p;
			}
		}
	}
}

void print()
{
	for (i = 0; i < 4; i++)
	{
		q = adjacency[i];
		while (q != NULL)
		{
			printf("  %d  ", q->vertex);
			q = q->next;
		}
		printf("\n");
	}
}
