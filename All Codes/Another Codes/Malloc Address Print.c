#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n;
    printf("Enter value of number of array elements:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("Address of element %d is %u\n",i+1,p+i);
    }
    free(p);
}
