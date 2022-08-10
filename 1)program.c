int main()
{
    int num1,num2;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the second number:\n");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("The first number %d\nand second number %d",num1,num2);
    getch();
    return 0;
}
void swap(int *n1,int *n2)
{
    int t;
    t=*n1;
    *n1=*n2;
    *n2=t;
}
