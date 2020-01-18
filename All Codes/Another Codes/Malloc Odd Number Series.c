#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,*ptr,n,i=1;
    printf("Enter number of series:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("ERROR!Memory not allocated:\n");
        exit(0);
    }
    for(a=0;a<n;a++)
    {
        *(ptr+a)=i;
        i+=2;
    }
    printf("Odd series is:");
    for(a=0;a<n;a++)
        printf("\n%d",*(ptr+a));
}
