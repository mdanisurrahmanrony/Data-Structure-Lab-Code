#include<stdio.h>
int fact(int x)
{
  if(x==1)
    return 1;
  else
    return x=x*fact(x-1);
}
void main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
