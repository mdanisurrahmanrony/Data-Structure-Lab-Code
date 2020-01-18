#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int *p;   /* will point to a region of free memory */
int *tos; /* points to top of stack */
int *bos; /* points to bottom of stack */
void push(int i)
{
  if(p > bos){
    printf("Stack Full\n");
    return;
  }
  *p = i;
  p++;
}
int pop(void)
{
  p--;
  if(p < tos) {
    printf("Stack Underflow\n");
    return 0;
  }
  return *p;
}
int main(void)
{
  float a, b,c;
  char s[80];

  p = (int *) malloc(MAX*sizeof(int)); /* get stack memory */
  if(!p) {
    printf("Allocation Failure\n");
    exit(1);
  }
  tos = p;
  bos = p + MAX-1;
  printf("Four Basic Function (Summation,Subtract,Multiply,Divide) of Calculator\n");
  printf("Enter 'q' to quit\n");
  printf("\nEnter two integers to one by one and then enter operator to calculate\n");
  do {
    printf(": ");
    gets(s);
    switch(*s) {
      case '+':
        a = pop();
        b = pop();
        c = pop();
        push(a+b+c);
        printf("Sum of %.2f , %.2f and %.2f is %.2f\n\n",a,b,c,(a+b+c));
        break;
      case '-':
        a = pop();
        b = pop();
        push(b-a);
        printf("Subtraction from %.2f to %.2f is %.2f\n\n",b,a,b-a);
        break;
      case '*':
        a = pop();
        b = pop();
        c = pop();
        push(b*a*c);
        printf("Multiplication of %.2f, %.2f and %.2f is %.2f\n\n",a,b,c,b*a*c);
        break;
      case '/':
        a = pop();
        b = pop();
        c = pop();
        if(a==0) {
          printf("Divide by 0\n\n");
          break;
        }
        push(c/b/a);
        printf("%.2f/%.2f/%.f is %.2f\n\n",c,b,a,c/b/a);
        break;
       case '.': /*show contents of top of stack*/
        a = pop();
        push(a);
        printf("Current value on top of stack: %f\n", a);
        break;
       default:
        push(atoi(s));
    }
  } while(*s != 'q');
  return 0;
}
