int main()
{
    int n1,n2;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("The maximum number is %d",max(&n1,&n2));
    getch();
    return 0;
}

int max(int *p,int *t)
{
    if(*t>*p)
       return *t;
    else
        return *p;

}
