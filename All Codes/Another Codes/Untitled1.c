#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,sum=0,*ptr;
    float average;
    printf("Enter number of numbers\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i)
    {
        printf("Enter %d number\n",i+1);
        scanf("%d",(ptr+i));
        //printf("%d\n",*(ptr+i));
        sum+=*(ptr+i);
    }
    average=(float)sum/n;
    printf("Sum:%d\nAverage:%f",sum,average);
}
