#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter number\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i)
    {
        printf("%p\n",(ptr+i));
    }
}
