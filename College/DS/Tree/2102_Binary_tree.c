/*NAME:-Hemant S.Yadav
ROLLNO:-2102
EXP:-Program to implement Binary Search Tree */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int Data;
	struct node *left, *right;
};
typedef struct node NODE;

NODE *Create_Node(int Data)
{
	NODE *temp = (NODE *)malloc(sizeof(NODE));
	temp->Data = Data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(NODE *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->Data);
		inorder(root->right);
	}
}
void preorder(NODE *root)
{
	if (root != NULL)
	{
		printf("%d ", root->Data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->Data);
	}
}

NODE *insert(NODE *node, int Data)
{
	if (node == NULL)
	{
		return Create_Node(Data);
	}

	if (Data < node->Data)
	{
		node->left = insert(node->left, Data);
	}
	else if (Data > node->Data)
	{
		node->right = insert(node->right, Data);
	}

	return node;
}

int search(NODE *root, int Data)
{
	while (root != NULL)
	{

		if (Data > root->Data)
			root = root->right;

		else if (Data < root->Data)
			root = root->left;
		else
			return 1;
	}
	return 0;
}

int main()
{
	printf("HII");
	NODE *root = NULL;
	int data, opt, found;

	printf("Enter data at root node = ");
	scanf("%d", &data);
	root = insert(root, data);

	while (1)
	{
		printf("\n\n1.Add new node\n2.Search node\n3.In order traversal\n4.Pre order traversal\n5.Post order traversal\n6.Exit\n Choose = ");

		scanf("%d", &opt);
		if (opt == 6)
		{
			break;
		}

		switch (opt)
		{
		case 1:
			printf("Enter data at node = ");
			scanf("%d", &data);
			insert(root, data);
			break;

		case 2:
			printf("Enter searching node = ");
			scanf("%d", &data);
			found = search(root, data);

			if (found)
			{
				printf("%d value is found in the tree", data);
			}
			else
			{
				printf("%d value not found", data);
			}
			break;

		case 3:
			inorder(root);
			break;

		case 4:
			preorder(root);
			break;

		case 5:
			postorder(root);
			break;
		}
	}

	return 0;
}