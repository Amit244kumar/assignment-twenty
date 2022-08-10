int main()
{
    int ar[10];
    printf("Enter the 10 numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d",ar+i);
    reverse(ar,10);
    getch();
    return 0;
}
void reverse(int *ar,int n)
{
    int d=0;
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(ar+i));
    }

}
