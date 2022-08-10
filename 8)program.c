int main()
{
    int ar[10];
    printf("Enter the 10 numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d",ar+i);
    printf("The sum is %d",sum(ar));
    getch();
    return 0;
}
int sum(int   *ar)
{
    int d=0;
    for(int i=0;i<10;i++)
    {
        d+=*(ar+i);
    }
    return d;
}
