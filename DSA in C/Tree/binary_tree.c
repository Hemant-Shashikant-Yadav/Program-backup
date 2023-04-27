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

int search(BST *t, int sv)
{
    int flag = 0;
    NODE *a = t->rt;

    while (1)
    {
        if (a->data == sv)
        {
            t->curr = a;
            flag = 1;
            break;
        }
        if (sv < a->data)
        {
            if (a->left != NULL)
            {
                /* code */
                t->prnt = a;
                a = a->left;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (a->right != NULL)
            {
                /* code */
                t->prnt = a;
                a = a->right;
            }
            else
            {
                break;
            }
            /* code */
        }
    }
    return flag;
}

void deleteNode(BST *t)
{
    int d, res;
    NODE *p, *q, *r, *s;

    printf("Enter data = ");
    scanf("%d", &d);

    res = search(t, d);

    if (res == 0)
    {
        printf("NO such data");
        return;
        /* code */
    }
    p = t->prnt;
    q = t->curr;

    if (q->left == NULL && q->right == NULL)
    {
        if (p->left == q)
        {
            p->left == NULL;
            /* code */
        }
        else
        {
            p->right = NULL;
        }
        free(q);
        return;
        /* code */
    }
    if (q->left != NULL && q->right != NULL)
    {
        if (q->right == q)
        {
            r = q->left;

            r = r->right;
            /* code */
        }
        s->right = q->right;
        p->right = q->left;
    }
    else
    {
        r = q->right;
        while (r != NULL)
        {
            s = r;
            r = r->left;
        }
        s->left = q->left;
        p->left = q->right;
    }
    /* code */
}

int main()
{
    int opt, d, flag = 0;
    BST T;
    initiate(&T);

    while (1)
    {
        printf("\vTree menu:\n1.Create tree.\n2.Preorder.\n3.Inorder\n4.Postorder.\n5.Search\n6Delete node\n7.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt == 7)
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
            case 5:
                printf("Enter search value = ");
                int sv;
                scanf("%d", &sv);
                int flag = search(&T, sv);
                if (flag == 1)
                {
                    printf("Node found.");
                    /* code */
                }
                else
                {
                    printf("Node not found.");
                    /* code */
                }
            case 6:
                deleteNode(&T);
                break;

                break;
            }
        }
    }
    return 0;
}
