typedef struct account
{
    int ano;
    char anm[15];
    int acbal;
    int acstate;
} ACCT;

void input(ACCT *a, int n)
{
    a->ano = n;
    printf("Acc name =");
    scanf("%s", a->anm);
    printf("Acc bal = ");
    scanf("%d", a->acbal);
    a->acstate = 0;
}

void diasplay(ACCT *a)
{
    printf("\nAcc Data = \nAcc no = %d\nAcc name = %s\nAcc bal = %d\nAcc state = %d\n", a->ano, a->anm, a->acbal, a->acstate;)
}