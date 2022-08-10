int main()
{
    char str[20];
    int v=0,c=0;
    printf("Enter the string:\n");
    gets(str);
    vowAndCon(str,&v,&c);
    printf("The total Vowel %d and total consonants %d",v,c);
    getch();
    return 0;
}
void vowAndCon(char *p,int *v,int *c)
{
    for(int i=0;*(p+i);i++)
    {
        if(*(p+i)!=' ')
        if(*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='U'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
            (*v)++;
        else
            (*c)++;
    }
}
