#include<stdio.h>
int main()
{
    char str1[20],str2[20],*p;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    swapString(str1,str2);
    printf("The first string '%s'\n",str1);
    printf("The second string '%s'",str2);
    getch();
    return 0;
}
void swapString(char **s1,char **s2)
{
    char *p;
    p=*s1;
    *s1=*s2;
    *s2=p;
}
