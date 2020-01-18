#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m,i,f=0,*ptr;
    printf("Enter a number\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter values\n");
    for(i=0;i<n;i++)
    {
        printf("%d number\n",i+1);
        scanf("%d",(ptr+i));
    }
    printf("Enter search item\n");
    scanf("%d",&m);
    for(i=0;i<n;++i)
    {
        if(*(ptr+i)==m)
        {
            f++;
        }
    }
    if(f!=0)
        printf("/t Found\n");
    else
        printf("Not Found\n");
}
