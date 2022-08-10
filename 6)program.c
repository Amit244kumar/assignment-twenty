int main()
{
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    printf("The length of string is %d",length(str));
    getch();
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}
