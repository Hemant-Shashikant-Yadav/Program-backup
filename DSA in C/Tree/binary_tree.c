#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *left;
    struct node *right;
    int data, flg;
} NODE;

typedef struct binary_tree
{
    NODE *rt;
    NODE *prnt;
    NODE *curr;
} BST;

void initiate(BST *t)
{
    t->rt = NULL;
    t->prnt = t->curr = NULL;
}

NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->flg = 0;
    a->left = a->right = NULL;
    return a;
}

void preOrder(NODE *a)
{
    if (a != NULL)
    {
        printf("%4d", a->data);
        preOrder(a->left);
        preOrder(a->right);
        /* code */
    }
    else
    {
        return;
    }
}

void inOrder(NODE *a)
{
    if (a != NULL)
    {
        inOrder(a->left);
        printf("%4d", a->data);
        inOrder(a->right);
        /* code */
    }
    else
    {
        return;
    }
}

void postOrder(NODE *a)
{
    if (a != NULL)
    {
        postOrder(a->left);
        postOrder(a->right);
        printf("%4d", a->data);
        /* code */
    }
    else
    {
        return;
    }
}

void createTree(BST *t)
{
    NODE *a, *b;

    int d;

    while (1)
    {
        printf("Data = ");
        scanf("%d", &d);

        if (d == 0)
        {
            break;
        }
        if (t->rt == NULL)
        {
            t->rt = createNode(d);
        }
        else
        {
            a = t->rt;

            while (1)
            {
                if (d < a->data)
                {
                    if (a->left == NULL)
                    {
                        b = createNode(d);
                        a->left = b;
                        break;
                    }
                    else
                    {
                        a = a->left;
                    }
                }
                else
                {
                    if (a->right == NULL)
                    {
                        b = createNode(d);
                        a->right = b;
                        break;
                    }
                    else
                    {
                        a = a->right;
                    }
                }
            }
        }
    }
}

int main()
{
    int opt, d, flag = 0;
    BST T;
    initiate(&T);

    while (1)
    {
        printf("\vTree menu:\n1.Create tree.\n2.Preorder.\n3.Inorder\n4.Postorder.\n5.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt == 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            createTree(&T);
            flag = 1;
            break;
        default:
            if (flag == 0)
            {
                continue;
            }

            switch (opt)
            {
            case 2:
                printf("PreOrder = ");
                preOrder(T.rt);
                break;

            case 3:

                printf("InOrder = ");
                inOrder(T.rt);
                break;
            case 4:
                printf("PostOrder = ");
                postOrder(T.rt);
                break;

                break;
            }
        }
    }
    return 0;
}
