int main()
{
    char str[20];
    printf("Enter string:\n");
    gets(str);
    reverse(str);
    getch();
    return 0;
}
void reverse(char *str)
{
    int i;
    for( i=0;*(str+i);i++);
    for(int j=i-1;j>=0;j--)
        printf("%c",*(str+j));
}
