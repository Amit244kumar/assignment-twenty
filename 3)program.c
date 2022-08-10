int main()
{
    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    scanf("%d",arr+i);
    sort(arr,10);
    printf("\nThe sorted array");
     for(int i=0;i<10;i++)
       printf("%d ",*(arr+i));
    getch();
    return 0;
}
void sort(int *ptr,int n)
{
    int i,t,b;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j )=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }

}
