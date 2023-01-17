#include <stdio.h>
#include <string.h>

typedef struct book
{
    int bno;
    char bnm[15];
    int bprice;
    int bstate;
} BOOK;

BOOK bk;
FILE *fp;

int searching(int no)
{
    int pos = 0;
    rewind(fp);

    while (1)
    {
        fread(&bk, sizeof(BOOK), 1, fp);
        if (feof(fp))
        {
            pos = -1;
            break;
            /* code */
        }
        if (bk.bno == no)
        {
            break;
            /* code */
        }

        pos = ftell(fp);
    }
    return pos;
}

void add()
{
    int no, pos;

    printf("Book data = \n");
    printf("Book id = ");
    scanf("%d", &no);

    pos = searching(no);

    if (pos >= 0)
    {
        printf("Record exist.");
        return;
        /* code */
    }

    bk.bno = no;

    printf("Book name = ");
    scanf("%s", bk.bnm);
    printf("Book price = ");
    scanf("%d", &bk.bprice);
    bk.bstate = 1;

    fseek(fp, 0, SEEK_END);
    fwrite(&bk, sizeof(BOOK), 1, fp);
}

void mod()
{
    int no, pos;
    printf("Book id = ");
    scanf("%d", &no);

    pos = searching(no);

    if (pos == 1 || bk.bstate == 0)
    {
        printf("Record not exist.");
        return;
        /* code */
    }

    printf("Book name = ");
    scanf("%s", bk.bnm);
    printf("Book price = ");
    scanf("%d", &bk.bprice);
    bk.bstate = 1;

    fseek(fp, pos, SEEK_SET);
    fwrite(&bk, sizeof(BOOK), 1, fp);
}

void delete()
{
    int no, pos;
    printf("Book id = ");
    scanf("%d", &no);

    pos = searching(no);

    if (pos == -1 || bk.bstate == 0)
    {
        printf("Record deleted.");
        return;
        /* code */
    }

    bk.bstate = 0;
    fseek(fp, pos, SEEK_SET);
    fwrite(&bk, sizeof(BOOK), 1, fp);
    return;
}

void dispaly()
{
    fseek(fp, 0, SEEK_SET);

    printf("Book record = \n");

    while (1)
    {
        fread(&bk, sizeof(BOOK), 1, fp);

        if (feof(fp))
        {
            break;
            /* code */
        }
        printf("Book no = %5d \nBook name = %-15s \nBook price = %4d \nBook srate = %d\n", bk.bno, bk.bnm, bk.bprice, bk.bstate);

        /* code */
    }
}

int main()
{
    int opt, no, res;

    fp = fopen("book.dat", "r+b");

    if (fp == NULL)
    {
        fp = fopen("book.dat", "wb");
        fclose(fp);

        fp = fopen("book.dat", "r+b");

        /* code */
    }

    while (1)
    {
        printf("\nBook=\n1.Add\n2.Mod\n3.Del\n4.Search\n5.Display\n6.Exit\nChoose = ");
        scanf("%d", &opt);

        if (opt > 5)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            add();
            /* code */
            break;
        case 2:
            mod();
            /* code */
            break;
        case 3:
            delete ();
            /* code */
            break;
        case 4:
            printf("Book no =");
            scanf("%d", &no);

            res = searching(no);
            if (res == 1)
            {
                printf("Record not found.");
            }
            else
            {
                printf("Book no = %5d \nBook name = %-15s \nBook price = %4d \nBook srate = %d\n", bk.bno, bk.bnm, bk.bprice, bk.bstate);

                /* code */
            }

            /* code */
            break;
        case 5:
            dispaly();
            /* code */
            break;

        default:
            break;
        }

        /* code */
    }

    return 0;
}