#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,s,a=0;
    printf("Enter number of array elements:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
    {
      printf("\nEnter value of array element %d:\n",i+1);
      scanf("%d",(p+i));
    }
    printf("\n\nEnter searching elements:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
     if(*(p+i)==s)
     a++;
    }
    if(a==0)
        printf("Not found");
    else
        printf("Found");
    free(p);
}
