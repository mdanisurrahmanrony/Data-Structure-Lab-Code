#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,n1,n2,i,*ptr;
    printf("Enter a number\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%p\n",(ptr+i));
    }
    printf("Enter new number\n");
    scanf("%d",&n1);
    realloc(ptr,n1);
    for(i=0;i<n1;i++)
    {
        printf("%p\n",(ptr+i));
    }
    printf("Enter new number\n");
    scanf("%d",&n2);
    realloc(ptr,n2);
    for(i=0;i<n2;i++)
    {
        printf("%p\n",(ptr+i));
    }
}
